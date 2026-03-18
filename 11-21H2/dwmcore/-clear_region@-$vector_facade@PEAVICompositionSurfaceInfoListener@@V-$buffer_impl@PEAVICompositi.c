/*
 * XREFs of ?clear_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C7704
 * Callers:
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x1800C7640 (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ?UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z @ 0x1800C76C4 (-UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x1800C6B2C (--$move@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array_iterator.c)
 */

__int64 __fastcall detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  bool v10; // zf
  __int64 v11; // r8
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h]

  v3 = a1[1];
  v5 = *a1;
  v6 = v3 - *a1;
  v7 = a2 + a3;
  v8 = v6 >> 3;
  v10 = a2 + a3 == v8;
  if ( a2 + a3 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_12;
  }
  v11 = v5 + 8 * v8;
  if ( !v10 )
  {
    *(_QWORD *)&v13 = v5;
    *((_QWORD *)&v13 + 1) = v8;
    if ( !a2 )
    {
LABEL_8:
      v14 = a2;
      v15 = v13;
      v16 = a2;
      std::move<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
        (__int64)&v13,
        (const void *)(v5 + 8 * v7),
        v11,
        (__int64 *)&v15);
      v3 = a1[1];
      goto LABEL_3;
    }
    if ( !v5 )
    {
LABEL_9:
      _o__invalid_parameter_noinfo_noreturn(v7);
      __debugbreak();
      JUMPOUT(0x1800C77B8LL);
    }
    if ( a2 >= 0 )
    {
      if ( v8 >= a2 )
        goto LABEL_8;
      goto LABEL_9;
    }
LABEL_12:
    if ( !a2 )
      goto LABEL_8;
    goto LABEL_9;
  }
LABEL_3:
  result = 8 * a3;
  a1[1] = v3 - 8 * a3;
  return result;
}
