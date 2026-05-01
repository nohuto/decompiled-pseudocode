/*
 * XREFs of ?CrmpActivityRequestAndWait@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x18001E274
 * Callers:
 *     CrmActivityRequestAndWait @ 0x18001E380 (CrmActivityRequestAndWait.c)
 * Callees:
 *     <none>
 */

signed int __fastcall CrmpActivityRequestAndWait(struct _CRMP_ACTIVITY_CONTEXT *a1)
{
  signed int result; // eax
  DWORD v3; // edx
  DWORD v4; // ecx
  int v5; // [rsp+40h] [rbp-8h]

  result = RtlSubscribeWnfStateChangeNotification(
             (char *)a1 + 48,
             *((_QWORD *)a1 + 5),
             0LL,
             CrmpActivityWNFSyncCallback,
             a1,
             0LL,
             0,
             0,
             v5);
  if ( result >= 0 )
  {
    if ( *((_DWORD *)a1 + 14) <= 0x418937u )
      v3 = 1000 * *((_DWORD *)a1 + 14);
    else
      v3 = -1;
    v4 = WaitForSingleObject(*((HANDLE *)a1 + 8), v3);
    if ( v4 == -1 )
    {
      if ( (int)GetLastError() > 0 )
        return (unsigned __int16)GetLastError() | 0xC0070000;
      else
        return GetLastError();
    }
    else
    {
      result = 0;
      if ( v4 == 258 )
        return 258;
    }
  }
  return result;
}
