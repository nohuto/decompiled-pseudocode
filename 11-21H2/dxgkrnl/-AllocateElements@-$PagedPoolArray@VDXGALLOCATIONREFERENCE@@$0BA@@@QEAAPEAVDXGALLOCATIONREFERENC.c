/*
 * XREFs of ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C032C1C8
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C018F6E0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002C48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // esi
  __int64 result; // rax
  __int64 v7; // rax
  bool v8; // cf
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx

  v4 = a2;
  if ( (unsigned int)a2 <= 0x10 )
  {
    result = a1 + 8;
    *(_QWORD *)a1 = a1 + 8;
    if ( (_DWORD)a2 )
    {
      v12 = 0LL;
      a2 = (unsigned int)a2;
      do
      {
        *(_QWORD *)(v12 + *(_QWORD *)a1) = 0LL;
        v12 += 8LL;
        --a2;
      }
      while ( a2 );
      result = *(_QWORD *)a1;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a2 < 8 )
      return 0LL;
    v7 = 8LL * (unsigned int)a2;
    if ( !is_mul_ok((unsigned int)a2, 8uLL) )
      v7 = -1LL;
    v8 = __CFADD__(v7, 8LL);
    v9 = v7 + 8;
    if ( v8 )
      v9 = -1LL;
    v10 = operator new[](v9, 0x4B677844u, 256LL, a4);
    v11 = 0LL;
    if ( v10 )
    {
      v11 = v10 + 8;
      *(_QWORD *)v10 = v4;
      `vector constructor iterator'(
        (char *)(v10 + 8),
        8LL,
        v4,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    }
    *(_QWORD *)a1 = v11;
    result = v11;
  }
  *(_DWORD *)(a1 + 136) = v4;
  return result;
}
