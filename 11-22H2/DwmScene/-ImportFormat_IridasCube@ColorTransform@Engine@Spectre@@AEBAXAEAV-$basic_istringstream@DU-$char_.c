/*
 * XREFs of ?ImportFormat_IridasCube@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090664
 * Callers:
 *     ?Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18009003C (-Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?empty@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_NXZ @ 0x18001F7CC (-empty@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_NXZ.c)
 *     ?resize@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_KD@Z @ 0x18001F980 (-resize@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_KD@Z.c)
 *     ??$getline@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@YAAEAV?$basic_istream@DU?$char_traits@D@std@@@0@AEAV10@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@@Z @ 0x180050F38 (--$getline@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@YAAEAV-$basic_istream@DU-$_ea_180050F38.c)
 *     ??0?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x180050FD4 (--0-$basic_istringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV-$basic_string@D.c)
 *     ??_D?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180051544 (--_D-$basic_istringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     ??$?5DU?$char_traits@D@std@@V?$allocator@D@1@@std@@YAAEAV?$basic_istream@DU?$char_traits@D@std@@@0@AEAV10@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@@Z @ 0x18008EFCC (--$-5DU-$char_traits@D@std@@V-$allocator@D@1@@std@@YAAEAV-$basic_istream@DU-$char_t_ea_18008EFCC.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18008F1B0 (--$_Resize@U_Value_init_tag@std@@@-$vector@UColor@Math@Utils@Spectre@@V-$allocator@UColor@Math@U.c)
 *     Spectre::Engine::_anonymous_namespace_::StringBegins @ 0x180091158 (Spectre--Engine--_anonymous_namespace_--StringBegins.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall Spectre::Engine::ColorTransform::ImportFormat_IridasCube(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // r12
  char v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  _BYTE *v10; // rax
  int v11; // eax
  _BYTE *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // xmm1_4
  int v24; // xmm2_4
  __int64 v25; // rax
  __int64 v26; // [rsp+20h] [rbp-E0h] BYREF
  int v27; // [rsp+28h] [rbp-D8h] BYREF
  int v28; // [rsp+2Ch] [rbp-D4h] BYREF
  int v29; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v30; // [rsp+38h] [rbp-C8h]
  _QWORD *v31; // [rsp+40h] [rbp-C0h]
  _QWORD v32[4]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v33[5]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v34[30]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v35[2]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v36; // [rsp+190h] [rbp+90h]
  unsigned __int64 v37; // [rsp+198h] [rbp+98h]
  void *v38[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v39[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v40[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v41[4]; // [rsp+200h] [rbp+100h] BYREF

  v26 = 0LL;
  v5 = 0LL;
  *(_DWORD *)(a3 + 32) = 1;
  std::string::string(v41, (__int64)"LUT_3D_SIZE");
  std::string::string(v40, (__int64)"DOMAIN_MIN");
  std::string::string(v39, (__int64)"DOMAIN_MAX");
  v6 = 0LL;
  v7 = 0;
  v35[0] = 0LL;
  v36 = 0LL;
  v37 = 15LL;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = std::getline<char,std::char_traits<char>,std::allocator<char>>(a2, (__int64)v35);
    if ( !(unsigned __int8)std::ios_base::operator bool(v9 + *(int *)(*(_QWORD *)v9 + 4LL)) )
      break;
    if ( !std::string::empty((__int64)v35) )
    {
      v10 = v35;
      if ( v37 >= 0x10 )
        v10 = (_BYTE *)v35[0];
      if ( v36 != 1 || (*v10 != 13 ? (v11 = *v10 < 0xDu ? -1 : 1) : (v11 = 0), v11) )
      {
        v12 = v35;
        if ( v37 >= 0x10 )
          v12 = (_BYTE *)v35[0];
        if ( *v12 != 35 )
        {
          v13 = v35;
          if ( v37 >= 0x10 )
            v13 = (_QWORD *)v35[0];
          if ( *((_BYTE *)v13 + v36 - 1) == 13 )
            std::string::resize(v35, v36 - 1);
          v30 = v32;
          v14 = std::string::string(v32, (__int64)v41);
          v15 = std::string::string(v33, (__int64)v35);
          if ( (unsigned __int8)Spectre::Engine::_anonymous_namespace_::StringBegins(v15, v14) )
          {
            std::istringstream::istringstream(v34, v35);
            v38[0] = 0LL;
            v38[2] = 0LL;
            v38[3] = (void *)15;
            v16 = std::operator>><char>((__int64)v34, v38);
            std::istream::operator>>(v16, &v26);
            v5 = v26 * v26 * v26;
            std::vector<Spectre::Utils::Math::Color>::_Resize<std::_Value_init_tag>((_QWORD *)(a3 + 8), v5);
            std::string::_Tidy_deallocate((__int64)v38);
            goto LABEL_25;
          }
          v31 = v33;
          v17 = std::string::string(v33, (__int64)v40);
          v18 = std::string::string(v32, (__int64)v35);
          Spectre::Engine::_anonymous_namespace_::StringBegins(v18, v17);
          v31 = v33;
          v19 = std::string::string(v33, (__int64)v39);
          v20 = std::string::string(v32, (__int64)v35);
          if ( (unsigned __int8)Spectre::Engine::_anonymous_namespace_::StringBegins(v20, v19) )
          {
            v7 = 1;
          }
          else if ( v7 && v26 )
          {
            std::istringstream::istringstream(v34, v35);
            v21 = std::istream::operator>>(v34, &v29);
            v22 = std::istream::operator>>(v21, &v27);
            std::istream::operator>>(v22, &v28);
            v23 = v27;
            v24 = v28;
            v25 = *(_QWORD *)(a3 + 8);
            *(_DWORD *)(v8 + v25) = v29;
            *(_DWORD *)(v8 + v25 + 4) = v23;
            *(_DWORD *)(v8 + v25 + 8) = v24;
            *(_DWORD *)(v8 + v25 + 12) = 1065353216;
            ++v6;
            v8 += 16LL;
            if ( v6 == v5 )
            {
              std::istringstream::`vbase destructor'((__int64)v34);
              break;
            }
LABEL_25:
            std::istringstream::`vbase destructor'((__int64)v34);
          }
        }
      }
    }
  }
  *(_QWORD *)a3 = v26;
  std::string::_Tidy_deallocate((__int64)v35);
  std::string::_Tidy_deallocate((__int64)v39);
  std::string::_Tidy_deallocate((__int64)v40);
  std::string::_Tidy_deallocate((__int64)v41);
}
