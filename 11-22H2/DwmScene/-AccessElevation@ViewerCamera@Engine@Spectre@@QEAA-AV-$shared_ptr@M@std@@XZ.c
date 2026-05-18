/*
 * XREFs of ?AccessElevation@ViewerCamera@Engine@Spectre@@QEAA?AV?$shared_ptr@M@std@@XZ @ 0x1800920B8
 * Callers:
 *     ?StartReturnToDefaultElevation@ViewerCamera@Engine@Spectre@@UEAAXXZ @ 0x180093290 (-StartReturnToDefaultElevation@ViewerCamera@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VComponent@Engine@Spectre@@@2@XZ @ 0x1800433FC (-shared_from_this@-$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr.c)
 */

_QWORD *__fastcall Spectre::Engine::ViewerCamera::AccessElevation(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v8; // [rsp+30h] [rbp-18h]

  v4 = std::enable_shared_from_this<Spectre::Engine::Component>::shared_from_this(a1 + 8, &v7);
  *a2 = a1 + 1876;
  v5 = v4[1];
  *v4 = 0LL;
  v4[1] = 0LL;
  a2[1] = v5;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a2;
}
