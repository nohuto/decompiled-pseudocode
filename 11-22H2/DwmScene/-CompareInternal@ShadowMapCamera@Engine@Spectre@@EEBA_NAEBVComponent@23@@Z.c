/*
 * XREFs of ?CompareInternal@ShadowMapCamera@Engine@Spectre@@EEBA_NAEBVComponent@23@@Z @ 0x18008DFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     ?CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x18005B360 (-CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

bool __fastcall Spectre::Engine::ShadowMapCamera::CompareInternal(
        Spectre::Engine::ShadowMapCamera *this,
        const struct Component *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  bool result; // al

  result = Spectre::Engine::Camera::CompareInternal(this, a2)
        && (v4 = _RTDynamicCast_0(
                   a2,
                   0LL,
                   &Spectre::Engine::Component `RTTI Type Descriptor',
                   &Spectre::Engine::ShadowMapCamera `RTTI Type Descriptor',
                   1),
            !std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>((_QWORD *)(v4 + 1896), (_QWORD *)this + 237))
        && *(_DWORD *)(v5 + 1940) == *((_DWORD *)this + 485)
        && *(float *)(v5 + 1948) == *((float *)this + 487)
        && *(_BYTE *)(v5 + 1952) == *((_BYTE *)this + 1952)
        && *(float *)(v5 + 1956) == *((float *)this + 489)
        && *(_DWORD *)(v5 + 1964) == *((_DWORD *)this + 491)
        && *(_DWORD *)(v5 + 1960) == *((_DWORD *)this + 490)
        && *(float *)(v5 + 1968) == *((float *)this + 492)
        && *(_DWORD *)(v5 + 1944) == *((_DWORD *)this + 486);
  return result;
}
