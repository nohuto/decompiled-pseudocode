/*
 * XREFs of sub_180048AAC @ 0x180048AAC
 * Callers:
 *     sub_180049E98 @ 0x180049E98 (sub_180049E98.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180048AAC(__int64 a1, __int64 *a2, __int16 *a3, __int64 *a4)
{
  __int16 v4; // r11
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // r9
  void **result; // rax

  v4 = *a3;
  v5 = 0LL;
  v6 = a2[1];
  v7 = *a4;
  v8 = 0LL;
  if ( v6 )
  {
    v5 = *a2;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    v8 = v6;
  }
  result = &Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler::`vftable';
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)a1 = &Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler::`vftable';
  *(_QWORD *)(a1 + 16) = v8;
  *(_WORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 32) = v7;
  return result;
}
