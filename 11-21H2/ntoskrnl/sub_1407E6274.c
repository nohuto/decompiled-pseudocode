/*
 * XREFs of sub_1407E6274 @ 0x1407E6274
 * Callers:
 *     sub_1407D7CA0 @ 0x1407D7CA0 (sub_1407D7CA0.c)
 *     sub_1407D7E94 @ 0x1407D7E94 (sub_1407D7E94.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 *     sub_1406E9FB0 @ 0x1406E9FB0 (sub_1406E9FB0.c)
 *     sub_14079F130 @ 0x14079F130 (sub_14079F130.c)
 *     sub_1407E64AC @ 0x1407E64AC (sub_1407E64AC.c)
 *     sub_1407E7750 @ 0x1407E7750 (sub_1407E7750.c)
 *     sub_1409B1558 @ 0x1409B1558 (sub_1409B1558.c)
 */

__int64 __fastcall sub_1407E6274(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // r13
  __int64 v9; // rbp
  unsigned int v10; // ebx
  unsigned int v11; // esi
  int v12; // r12d
  __int64 i; // rax
  PVOID v14; // rbp
  void *v15; // rax
  ULONG v16; // edx
  PVOID Object; // [rsp+70h] [rbp+8h]

  if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(BugCheckParameter1);
    sub_1409B1558(
      "Terminating critical process 0x%p (%s)\n",
      (const void *)BugCheckParameter1,
      (const char *)(BugCheckParameter1 + 1448));
  }
  v8 = *(_QWORD *)(a2 + 184);
  v9 = sub_1407E64AC(BugCheckParameter1, 0LL);
  v10 = a4 & 4 | (2 * (a4 & 1)) | (a4 >> 1) & 1;
  v11 = 290;
  if ( v9 )
  {
    if ( (v10 & 1) != 0 )
    {
      v11 = -1073741558;
      v16 = 1850045264;
      v15 = (void *)v9;
    }
    else
    {
      Object = (PVOID)v9;
      v11 = 0;
      ObfReferenceObjectWithTag((PVOID)v9, 0x65547350u);
      v12 = 0;
      do
      {
        if ( v9 != a2 )
        {
          if ( (v10 & 4) != 0 )
          {
            v10 ^= ((unsigned __int8)v10 ^ (unsigned __int8)(*(_DWORD *)(v9 + 1380) >> 3)) & 8;
          }
          else if ( sub_140347810((struct _EX_RUNDOWN_REF *)(v9 + 1352)) )
          {
            v10 |= 8u;
          }
          else
          {
            v10 = (((unsigned __int8)v10 ^ (unsigned __int8)(16
                                                           * _interlockedbittestandset(
                                                               (volatile signed __int32 *)(v9 + 1376),
                                                               0xFu))) & 0x10 ^ v10) & 0xFFFFFFF7;
          }
          if ( (v10 & 8) != 0 )
          {
            ++v12;
            sub_14079F130(v9, a3, 0);
          }
        }
        v9 = sub_1407E64AC(BugCheckParameter1, v9);
      }
      while ( v9 );
      if ( v12 && BugCheckParameter1 == v8 )
        sub_1402F374C(0);
      for ( i = sub_1407E7750(BugCheckParameter1, 0LL); ; i = sub_1407E7750(BugCheckParameter1, v14) )
      {
        v14 = (PVOID)i;
        if ( i != a2 && (v10 & 4) == 0 && (*(_DWORD *)(i + 1376) & 0x8000) == 0 )
          sub_1402AD030((struct _EX_RUNDOWN_REF *)(i + 1352));
        if ( v14 == Object )
          break;
      }
      ObfDereferenceObjectWithTag(v14, 0x6E457350u);
      v15 = Object;
      v16 = 1700033360;
    }
    ObfDereferenceObjectWithTag(v15, v16);
    if ( (v10 & 2) != 0 && *(_QWORD *)(a2 + 544) == BugCheckParameter1 )
      sub_14079F130(a2, a3, 0);
  }
  if ( BugCheckParameter1 != v8 && a3 == 1073807364 )
    sub_1406E9FB0(BugCheckParameter1, 0LL);
  if ( (v11 == 290 || *(_QWORD *)(BugCheckParameter1 + 1400) && BugCheckParameter1 != v8)
    && !sub_140683990(BugCheckParameter1, 0)
    && v11 == 290 )
  {
    return (unsigned int)-1073741558;
  }
  return v11;
}
