/*
 * XREFs of sub_14070BB0C @ 0x14070BB0C
 * Callers:
 *     sub_1405F5200 @ 0x1405F5200 (sub_1405F5200.c)
 *     sub_14070B610 @ 0x14070B610 (sub_14070B610.c)
 *     sub_140711F48 @ 0x140711F48 (sub_140711F48.c)
 *     sub_140712868 @ 0x140712868 (sub_140712868.c)
 *     sub_1407F74C4 @ 0x1407F74C4 (sub_1407F74C4.c)
 *     sub_1409E67F0 @ 0x1409E67F0 (sub_1409E67F0.c)
 *     sub_1409E6BB0 @ 0x1409E6BB0 (sub_1409E6BB0.c)
 *     sub_1409E7418 @ 0x1409E7418 (sub_1409E7418.c)
 *     sub_1409E7718 @ 0x1409E7718 (sub_1409E7718.c)
 *     sub_1409E7AD4 @ 0x1409E7AD4 (sub_1409E7AD4.c)
 *     sub_1409E8614 @ 0x1409E8614 (sub_1409E8614.c)
 *     sub_1409E8BEC @ 0x1409E8BEC (sub_1409E8BEC.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14070BB0C(__int64 a1, __int64 a2)
{
  _WORD *v3; // r14
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int16 v6; // bx
  unsigned __int64 v7; // rdx
  unsigned __int16 v8; // ax
  __int64 Pool2; // rax
  __int64 v10; // rcx
  void *Src[2]; // [rsp+20h] [rbp-38h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]

  *(_OWORD *)Src = 0LL;
  *(_WORD *)a2 = 0;
  v3 = *(_WORD **)(a2 + 8);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 32LL);
  if ( v4 )
  {
    v5 = v4 + 112;
    if ( v5 >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    v14 = *(_QWORD *)(v5 + 8);
    Src[1] = (void *)v14;
    v6 = *(_DWORD *)v5 & 0xFFFE;
    if ( v6 )
    {
      if ( v14 )
      {
        if ( (v14 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v7 = v14 + v6;
        if ( v7 > 0x7FFFFFFF0000LL || v7 < v14 )
          MEMORY[0x7FFFFFFF0000] = 0;
        if ( v6 > 0x400u )
          v6 = 1024;
      }
      else
      {
        v6 = 0;
      }
    }
  }
  else
  {
    v6 = 0;
  }
  if ( v6 )
  {
    v8 = *(_WORD *)(a2 + 2);
    if ( v8 )
    {
      if ( v6 >= v8 )
        v6 = *(_WORD *)(a2 + 2);
    }
    else
    {
      Pool2 = ExAllocatePool2(256LL, v6, 1350005829LL);
      v3 = (_WORD *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      *(_QWORD *)(a2 + 8) = Pool2;
      *(_WORD *)(a2 + 2) = v6;
    }
    memmove(v3, Src[1], v6);
    if ( v6 >> 1 )
    {
      v10 = v6 >> 1;
      do
      {
        if ( !*v3 )
          *v3 = 32;
        ++v3;
        --v10;
      }
      while ( v10 );
    }
    *(_WORD *)a2 = v6;
  }
  return 0;
}
