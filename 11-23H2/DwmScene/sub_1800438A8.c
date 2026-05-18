/*
 * XREFs of sub_1800438A8 @ 0x1800438A8
 * Callers:
 *     sub_180044A1C @ 0x180044A1C (sub_180044A1C.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

_QWORD *__fastcall sub_1800438A8(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r10
  __int16 v8; // r8
  __int64 v9; // r9
  volatile signed __int32 *v10; // rcx
  _QWORD *result; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = sub_18001C190();
  v5 = v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler>::`vftable';
    v6 = sub_180015604(v12, a2);
    *(_QWORD *)(v5 + 16) = &Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler::`vftable';
    *(_QWORD *)(v5 + 24) = v7;
    *(_QWORD *)(v5 + 32) = v7;
    *(_QWORD *)(v5 + 24) = *v6;
    *(_QWORD *)(v5 + 32) = v6[1];
    v6[1] = v7;
    *v6 = v7;
    *(_WORD *)(v5 + 40) = v8;
    *(_QWORD *)(v5 + 48) = v9;
    v10 = (volatile signed __int32 *)v6[1];
    if ( v10 )
      sub_180010574(v10);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 16;
  result = a1;
  a1[1] = v5;
  return result;
}
