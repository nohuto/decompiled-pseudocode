/*
 * XREFs of StorCreateDictionary @ 0x1C0077A2C
 * Callers:
 *     RaidCreateAdapter @ 0x1C003A96C (RaidCreateAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorCreateDictionary(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *Pool2; // rax
  _QWORD *v4; // rcx

  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = RaidGetKeyFromUnit;
  v1 = 20LL;
  *(_DWORD *)(a1 + 4) = 20;
  *(_QWORD *)(a1 + 32) = StorCompareUlongKey;
  *(_DWORD *)(a1 + 8) = 512;
  *(_QWORD *)(a1 + 40) = StorHashUlongKey;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 320LL, 1952672068LL);
  v4 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  do
  {
    Pool2[1] = Pool2;
    *Pool2 = Pool2;
    Pool2 += 2;
    --v1;
  }
  while ( v1 );
  *(_QWORD *)(a1 + 16) = v4;
  return 0LL;
}
