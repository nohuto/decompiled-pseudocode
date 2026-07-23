/*
 * XREFs of sub_1403AEB58 @ 0x1403AEB58
 * Callers:
 *     sub_1403AF5E4 @ 0x1403AF5E4 (sub_1403AF5E4.c)
 *     IoDisconnectInterrupt @ 0x140816AA0 (IoDisconnectInterrupt.c)
 * Callees:
 *     sub_1403AEC40 @ 0x1403AEC40 (sub_1403AEC40.c)
 *     sub_1403AED64 @ 0x1403AED64 (sub_1403AED64.c)
 *     sub_1403AF3B4 @ 0x1403AF3B4 (sub_1403AF3B4.c)
 *     sub_1403AFE68 @ 0x1403AFE68 (sub_1403AFE68.c)
 *     sub_14056EE94 @ 0x14056EE94 (sub_14056EE94.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1403AEB58(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rdi
  unsigned int v6; // esi
  char v7; // r13
  __int64 v8; // rbp
  __int64 *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbx
  int v12; // eax
  void *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx

  v3 = (unsigned __int8)a2;
  v5 = a1;
  v6 = 0;
  sub_1403AED64(a1, a2, a3, 0LL);
  v7 = sub_1403AFE68(a3);
  v8 = v3;
  sub_1403AEC40(v5, v3);
  if ( (_BYTE)v3 )
  {
    v9 = v5;
    v10 = v3;
    do
    {
      v11 = *v9;
      if ( v7 )
        v12 = sub_14056EE94(*v9, a3);
      else
        v12 = sub_1403AF3B4(0LL, *v9, a3);
      _InterlockedOr((volatile signed __int32 *)(v11 + 104), 1u);
      if ( v12 < 0 )
      {
        v6 = v12;
      }
      else if ( v12 == 296 )
      {
        v6 = 296;
      }
      ++v9;
      --v10;
    }
    while ( v10 );
  }
  v13 = *(void **)(*v5 + 272);
  if ( v13 )
  {
    if ( (_DWORD)v8 )
    {
      v14 = v8;
      do
      {
        v15 = *v5++;
        *(_QWORD *)(v15 + 272) = 0LL;
        --v14;
      }
      while ( v14 );
    }
    ExFreePoolWithTag(v13, 0x5249654Bu);
  }
  return v6;
}
