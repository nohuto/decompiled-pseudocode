/*
 * XREFs of PmVolumeManagerNotification @ 0x1C0023170
 * Callers:
 *     <none>
 * Callees:
 *     ?PmVolumeManagerArrival@@YAJPEAU_CONTROL_EXTENSION@@PEAU_UNICODE_STRING@@@Z @ 0x1C000AEE4 (-PmVolumeManagerArrival@@YAJPEAU_CONTROL_EXTENSION@@PEAU_UNICODE_STRING@@@Z.c)
 *     PmVolumeManagerRemoval @ 0x1C0028050 (PmVolumeManagerRemoval.c)
 */

__int64 __fastcall PmVolumeManagerNotification(char *NotificationStructure, char *Context)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  const UNICODE_STRING *j; // rbx
  struct _UNICODE_STRING *v7; // rdx
  unsigned int v8; // eax
  __int64 v10; // rax
  const UNICODE_STRING *i; // rbx
  __int64 v12; // rcx

  v4 = 0;
  KeWaitForSingleObject(Context + 16, Executive, 0, 0, 0LL);
  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( v5 )
  {
    v10 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
    if ( !v10 )
    {
      for ( i = (const UNICODE_STRING *)*((_QWORD *)Context + 9);
            i != (const UNICODE_STRING *)(Context + 72);
            i = *(const UNICODE_STRING **)&i->Length )
      {
        if ( RtlEqualUnicodeString(i + 1, *((PCUNICODE_STRING *)NotificationStructure + 5), 1u) )
        {
          v8 = PmVolumeManagerRemoval(v12, i);
          goto LABEL_7;
        }
      }
    }
  }
  else
  {
    for ( j = (const UNICODE_STRING *)*((_QWORD *)Context + 9); ; j = *(const UNICODE_STRING **)&j->Length )
    {
      v7 = (struct _UNICODE_STRING *)*((_QWORD *)NotificationStructure + 5);
      if ( j == (const UNICODE_STRING *)(Context + 72) )
        break;
      if ( RtlEqualUnicodeString(j + 1, v7, 1u) )
        goto LABEL_8;
    }
    v8 = PmVolumeManagerArrival((struct _CONTROL_EXTENSION *)Context, v7);
LABEL_7:
    v4 = v8;
  }
LABEL_8:
  KeReleaseMutex((PRKMUTEX)(Context + 16), 0);
  return v4;
}
