/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x180014D14
 * Callers:
 *     ?ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@V?$StridedSpan@UVertexAAFixup_UVxN@@@@@Z @ 0x1800A4C20 (-ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V-$StridedSpan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // r10
  bool v6; // cf
  __int64 v7; // rcx
  __int64 i; // rdx
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v5 = 0x6DB6DB6DB6DB6DB7LL * ((a3 - a2) >> 3);
  if ( v5 < 0 )
  {
    v6 = a4[2] < 0x9249249249249249uLL * ((a3 - a2) >> 3);
  }
  else
  {
    if ( v5 <= 0 )
      goto LABEL_5;
    v6 = a4[1] - a4[2] < (unsigned __int64)v5;
  }
  if ( v6 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
    JUMPOUT(0x18011EE7DLL);
  }
LABEL_5:
  v7 = *a4 + 56LL * a4[2];
  for ( i = a2 + 8; i - 8 != a3; i += 56LL )
  {
    *(_DWORD *)v7 = *(_DWORD *)(i - 8);
    *(_DWORD *)(v7 + 4) = *(_DWORD *)(i - 4);
    *(_DWORD *)(v7 + 8) = *(_DWORD *)i;
    *(_DWORD *)(v7 + 12) = *(_DWORD *)(i + 4);
    *(_DWORD *)(v7 + 16) = *(_DWORD *)(i + 8);
    *(_DWORD *)(v7 + 20) = *(_DWORD *)(i + 12);
    *(_DWORD *)(v7 + 24) = *(_DWORD *)(i + 16);
    *(_DWORD *)(v7 + 28) = *(_DWORD *)(i + 20);
    *(_DWORD *)(v7 + 32) = *(_DWORD *)(i + 24);
    *(_OWORD *)(v7 + 36) = *(_OWORD *)(i + 28);
    *(_BYTE *)(v7 + 52) = *(_BYTE *)(i + 44);
    *(_BYTE *)(v7 + 53) = *(_BYTE *)(i + 45);
    v7 += 56LL;
  }
  result = a1;
  a4[2] = 0x6DB6DB6DB6DB6DB7LL * ((v7 - *a4) >> 3);
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
