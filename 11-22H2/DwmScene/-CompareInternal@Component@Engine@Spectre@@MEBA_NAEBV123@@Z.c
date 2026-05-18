/*
 * XREFs of ?CompareInternal@Component@Engine@Spectre@@MEBA_NAEBV123@@Z @ 0x180081340
 * Callers:
 *     ?CompareInternal@Light@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x180043190 (-CompareInternal@Light@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z.c)
 *     ?CompareInternal@Bounds@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x18004A230 (-CompareInternal@Bounds@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z.c)
 *     ?CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x18005B360 (-CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z.c)
 *     ?CompareInternal@Aimer@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x180096890 (-CompareInternal@Aimer@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z.c)
 * Callees:
 *     ??$?9DU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z @ 0x18001C538 (--$-9DU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA_NAEBV-$basic_string@DU-$char_traits@D@std@.c)
 */

bool __fastcall Spectre::Engine::Component::CompareInternal(
        Spectre::Engine::Component *this,
        const struct Component *a2)
{
  return !std::operator!=<char>((_QWORD *)a2 + 3, (_QWORD *)this + 3)
      && *((_BYTE *)a2 + 72) == *((_BYTE *)this + 72)
      && *((_DWORD *)a2 + 19) == *((_DWORD *)this + 19);
}
