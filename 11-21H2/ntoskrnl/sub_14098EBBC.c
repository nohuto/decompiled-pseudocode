/*
 * XREFs of sub_14098EBBC @ 0x14098EBBC
 * Callers:
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     sub_14098EC78 @ 0x14098EC78 (sub_14098EC78.c)
 * Callees:
 *     sub_140225C88 @ 0x140225C88 (sub_140225C88.c)
 *     sub_1403B402C @ 0x1403B402C (sub_1403B402C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14098EBBC(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int8 v3; // al
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  int v6; // ebp
  _DWORD *Pool2; // rax

  v2 = 0;
  v3 = sub_140225C88((_BYTE *)a1);
  v5 = *(_DWORD **)(v4 + 32);
  v6 = *((unsigned __int8 *)&off_140C03040[534 * dword_140C232CC + 8] + v3);
  if ( v5 )
  {
    if ( *v5 == v6 )
      return v2;
    ExFreePoolWithTag(v5, 0x704D5050u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  if ( (unsigned __int8)v6 > 1u )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(12 * v6 + 40), 1884115024LL);
    if ( Pool2 )
    {
      *Pool2 = v6;
      *(_QWORD *)(a1 + 32) = Pool2;
      sub_1403B402C(a1);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
