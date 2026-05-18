/*
 * XREFs of ?CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x18005B360
 * Callers:
 *     ?CompareInternal@ShadowMapCamera@Engine@Spectre@@EEBA_NAEBVComponent@23@@Z @ 0x18008DFE0 (-CompareInternal@ShadowMapCamera@Engine@Spectre@@EEBA_NAEBVComponent@23@@Z.c)
 *     ?CompareInternal@ViewerCamera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x180092510 (-CompareInternal@ViewerCamera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z.c)
 * Callees:
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     ??$?9DU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z @ 0x18001C538 (--$-9DU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA_NAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??8type_info@@QEBA_NAEBV0@@Z @ 0x180047D6C (--8type_info@@QEBA_NAEBV0@@Z.c)
 *     ??$?9U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@U?$less@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@1@V?$allocator@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@@1@@std@@YA_NAEBV?$map@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@U?$less@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@@2@@0@0@Z @ 0x18005864C (--$-9U-$pair@HV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@std@@UVector4@Math@.c)
 *     ??$?9URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YA_NAEBV?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@0@0@Z @ 0x180058664 (--$-9URenderPassInfo@Camera@Engine@Spectre@@V-$allocator@URenderPassInfo@Camera@Engine@Spectre@@.c)
 *     ??$?9V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@std@@YA_NAEBV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@0@0@Z @ 0x1800586A4 (--$-9V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$basic_stri.c)
 *     ??8ScissorRect@Engine@Spectre@@QEBA_NAEBU012@@Z @ 0x180059CE4 (--8ScissorRect@Engine@Spectre@@QEBA_NAEBU012@@Z.c)
 *     ?UpdateAspectRatioAutomatic@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005D88C (-UpdateAspectRatioAutomatic@Camera@Engine@Spectre@@IEBAXXZ.c)
 *     ?CompareInternal@Component@Engine@Spectre@@MEBA_NAEBV123@@Z @ 0x180081340 (-CompareInternal@Component@Engine@Spectre@@MEBA_NAEBV123@@Z.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

bool __fastcall Spectre::Engine::Camera::CompareInternal(Spectre::Engine::Camera *this, const struct Component *a2)
{
  __int64 v4; // rdi
  float v5; // xmm6_4
  char v6; // al
  bool v7; // al

  if ( !Spectre::Engine::Component::CompareInternal(this, a2) )
    return 0;
  v4 = _RTDynamicCast_0(
         a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Camera `RTTI Type Descriptor',
         1);
  if ( std::operator!=<Spectre::Engine::Camera::RenderPassInfo,std::allocator<Spectre::Engine::Camera::RenderPassInfo>>(
         (_QWORD *)(v4 + 104),
         (_QWORD *)this + 13) )
  {
    return 0;
  }
  if ( *(_DWORD *)(v4 + 128) != *((_DWORD *)this + 32) )
    return 0;
  if ( std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>((_QWORD *)(v4 + 136), (_QWORD *)this + 17) )
    return 0;
  if ( std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>((_QWORD *)(v4 + 152), (_QWORD *)this + 19) )
    return 0;
  if ( *(_DWORD *)(v4 + 172) != *((_DWORD *)this + 43) )
    return 0;
  if ( *(_DWORD *)(v4 + 176) != *((_DWORD *)this + 44) )
    return 0;
  if ( std::operator!=<char>((_QWORD *)(v4 + 216), (_QWORD *)this + 27) )
    return 0;
  if ( std::operator!=<char>((_QWORD *)(v4 + 248), (_QWORD *)this + 31) )
    return 0;
  if ( *(_DWORD *)(v4 + 292) != *((_DWORD *)this + 73) )
    return 0;
  if ( _mm_movemask_ps(_mm_cmpneq_ps(*(__m128 *)(v4 + 296), *(__m128 *)((char *)this + 296))) )
    return 0;
  if ( *(float *)(v4 + 312) != *((float *)this + 78) )
    return 0;
  if ( *(_DWORD *)(v4 + 316) != *((_DWORD *)this + 79) )
    return 0;
  if ( *(float *)(v4 + 320) != *((float *)this + 80) )
    return 0;
  if ( *(float *)(v4 + 324) != *((float *)this + 81) )
    return 0;
  if ( *(float *)(v4 + 328) != *((float *)this + 82) )
    return 0;
  Spectre::Engine::Camera::UpdateAspectRatioAutomatic((Spectre::Engine::Camera *)v4);
  v5 = *(float *)(v4 + 332);
  Spectre::Engine::Camera::UpdateAspectRatioAutomatic(this);
  if ( v5 != *((float *)this + 83)
    || *(_BYTE *)(v4 + 336) != *((_BYTE *)this + 336)
    || *(float *)(v4 + 340) != *((float *)this + 85)
    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*((unsigned __int64 *)this + 43), (__m128)*(unsigned __int64 *)(v4 + 344))) & 3) != 3
    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*((unsigned __int64 *)this + 44), (__m128)*(unsigned __int64 *)(v4 + 352))) & 3) != 3
    || *(_DWORD *)(v4 + 360) != *((_DWORD *)this + 90)
    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)((char *)this + 364), (__m128)*(unsigned __int64 *)(v4 + 364))) & 3) != 3 )
  {
    return 0;
  }
  v6 = *((_BYTE *)this + 388);
  if ( *(_BYTE *)(v4 + 388) )
  {
    if ( !v6 )
      return 0;
    v7 = Spectre::Engine::ScissorRect::operator==((_DWORD *)(v4 + 372), (_DWORD *)this + 93);
  }
  else
  {
    v7 = v6 == 0;
  }
  return v7
      && *(float *)(v4 + 392) == *((float *)this + 98)
      && *(float *)(v4 + 396) == *((float *)this + 99)
      && *(float *)(v4 + 400) == *((float *)this + 100)
      && *(float *)(v4 + 404) == *((float *)this + 101)
      && *(float *)(v4 + 408) == *((float *)this + 102)
      && !std::operator!=<std::wstring,std::allocator<std::wstring>>((__int64 **)(v4 + 416), (_QWORD *)this + 52)
      && *(_DWORD *)(v4 + 440) == *((_DWORD *)this + 110)
      && *(_BYTE *)(v4 + 464) == *((_BYTE *)this + 464)
      && *(_BYTE *)(v4 + 465) == *((_BYTE *)this + 465)
      && *(_QWORD *)(v4 + 480) == *((_QWORD *)this + 60)
      && *(_QWORD *)(v4 + 472) == *((_QWORD *)this + 59)
      && *(_QWORD *)(v4 + 496) == *((_QWORD *)this + 62)
      && *(_QWORD *)(v4 + 488) == *((_QWORD *)this + 61)
      && *(_QWORD *)(v4 + 512) == *((_QWORD *)this + 64)
      && *(_QWORD *)(v4 + 504) == *((_QWORD *)this + 63)
      && *(_QWORD *)(v4 + 528) == *((_QWORD *)this + 66)
      && *(_QWORD *)(v4 + 520) == *((_QWORD *)this + 65)
      && *(_QWORD *)(v4 + 536) == *((_QWORD *)this + 67)
      && !std::operator!=<std::pair<int,std::string>,Spectre::Utils::Math::Vector4,std::less<std::pair<int,std::string>>,std::allocator<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>>>(
            (_QWORD *)(v4 + 1616),
            (__int64)this + 1616)
      && type_info::operator==(*(_QWORD *)(v4 + 1696), *((_QWORD *)this + 212))
      && !*(_QWORD *)(v4 + 1760)
      && !*((_QWORD *)this + 220);
}
