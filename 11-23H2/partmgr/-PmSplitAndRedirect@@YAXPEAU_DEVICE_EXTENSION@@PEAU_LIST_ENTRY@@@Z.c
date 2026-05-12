/*
 * XREFs of ?PmSplitAndRedirect@@YAXPEAU_DEVICE_EXTENSION@@PEAU_LIST_ENTRY@@@Z @ 0x1C0010550
 * Callers:
 *     ?PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0001F80 (-PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ?PmSplitAndRedirectDeviceIoControl@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z @ 0x1C001069C (-PmSplitAndRedirectDeviceIoControl@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?PmSplitAndRedirectWrite@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z @ 0x1C001081C (-PmSplitAndRedirectWrite@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall PmSplitAndRedirect(struct _DEVICE_EXTENSION *a1, struct _LIST_ENTRY *a2)
{
  KIRQL v4; // al
  char *v5; // r8
  KIRQL v6; // dl
  __int64 *v7; // rcx
  char *v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rcx
  IRP *v11; // rbx
  char v12; // cl
  int v13; // eax
  __int64 *v14; // [rsp+20h] [rbp-10h] BYREF
  char *v15; // [rsp+28h] [rbp-8h]

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
  v5 = (char *)a1 + 656;
  v6 = v4;
  v7 = (__int64 *)*((_QWORD *)a1 + 82);
  if ( (struct _DEVICE_EXTENSION *)v7[1] != (struct _DEVICE_EXTENSION *)((char *)a1 + 656)
    || (v15 = (char *)a1 + 656,
        v14 = v7,
        v7[1] = (__int64)&v14,
        *(_QWORD *)v5 = &v14,
        v8 = (char *)*((_QWORD *)a1 + 83),
        v15 != v5)
    || *(char **)v8 != v5 )
  {
LABEL_14:
    __fastfail(3u);
  }
  *(_QWORD *)v8 = &v14;
  v15 = v8;
  *((_QWORD *)a1 + 83) = (char *)a1 + 656;
  *(_QWORD *)v5 = v5;
  KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v6);
  while ( 1 )
  {
    v9 = v14;
    if ( v14 == (__int64 *)&v14 )
      break;
    if ( (__int64 **)v14[1] != &v14 )
      goto LABEL_14;
    v10 = (__int64 *)*v14;
    if ( *(__int64 **)(*v14 + 8) != v14 )
      goto LABEL_14;
    v14 = (__int64 *)*v14;
    v11 = (IRP *)(v9 - 21);
    v10[1] = (__int64)&v14;
    *(v9 - 14) = 0LL;
    v9[1] = (__int64)v9;
    *v9 = (__int64)v9;
    v12 = *(_BYTE *)v9[2];
    if ( v12 == 4 )
    {
      v13 = PmSplitAndRedirectWrite(a1, v11, a2);
    }
    else if ( v12 == 14 )
    {
      v13 = PmSplitAndRedirectDeviceIoControl(a1, v11, a2);
    }
    else
    {
      v13 = -1073741808;
    }
    v11->IoStatus.Status = v13;
    IofCompleteRequest(v11, 1);
  }
}
