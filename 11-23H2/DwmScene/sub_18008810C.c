/*
 * XREFs of sub_18008810C @ 0x18008810C
 * Callers:
 *     sub_1800883E0 @ 0x1800883E0 (sub_1800883E0.c)
 *     sub_1800D4DD0 @ 0x1800D4DD0 (sub_1800D4DD0.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

_QWORD *__fastcall sub_18008810C(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _QWORD *result; // rax

  v2 = sub_18001C190();
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::RenderStateDesc>::`vftable';
    memset((void *)(v2 + 16), 0, 0x48uLL);
    *(_QWORD *)(v3 + 20) = 2LL;
    *(_QWORD *)(v3 + 28) = 0LL;
    *(_DWORD *)(v3 + 36) = 0;
    *(_BYTE *)(v3 + 40) = 0;
    *(_QWORD *)(v3 + 44) = 0LL;
    *(_QWORD *)(v3 + 52) = 0LL;
    *(_QWORD *)(v3 + 60) = 0LL;
    *(_QWORD *)(v3 + 68) = 0LL;
    *(_DWORD *)(v3 + 76) = 65793;
    *(_BYTE *)(v3 + 80) = 1;
    *(_DWORD *)(v3 + 84) = 3;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  result = a1;
  a1[1] = v3;
  return result;
}
