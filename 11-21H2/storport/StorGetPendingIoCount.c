/*
 * XREFs of StorGetPendingIoCount @ 0x1C00210F8
 * Callers:
 *     RaidAdapterCheckWaitTimeout @ 0x1C0020F3C (RaidAdapterCheckWaitTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorGetPendingIoCount(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  _DWORD *v3; // rcx

  v1 = *(unsigned int *)(a1 + 840);
  result = 0LL;
  if ( (_DWORD)v1 )
  {
    v3 = (_DWORD *)(*(_QWORD *)(a1 + 832) + 24LL);
    do
    {
      result = (unsigned int)(*v3 + result);
      v3 += 80;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
