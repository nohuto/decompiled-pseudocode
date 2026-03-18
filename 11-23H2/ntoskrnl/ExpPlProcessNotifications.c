/*
 * XREFs of ExpPlProcessNotifications @ 0x140608990
 * Callers:
 *     <none>
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041E920 (ZwUpdateWnfStateData.c)
 *     RtlpInterlockedFlushSList @ 0x140428F30 (RtlpInterlockedFlushSList.c)
 */

__int64 ExpPlProcessNotifications()
{
  __int64 result; // rax
  _QWORD *v1; // rbx
  _QWORD *v2; // rdx
  int v3; // [rsp+58h] [rbp+10h] BYREF

  dword_140CF81B0 = 0;
  result = (__int64)RtlpInterlockedFlushSList(&stru_140CF81A0);
  v1 = (_QWORD *)result;
  if ( result )
  {
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      *((_DWORD *)v2 + 4) = 0;
      v3 = *((_DWORD *)v2 - 18);
      result = ZwUpdateWnfStateData((__int64)(v2 - 2), (__int64)&v3);
    }
    while ( v1 );
  }
  return result;
}
