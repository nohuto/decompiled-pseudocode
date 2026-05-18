/*
 * XREFs of ?ImportFormat_Autodesk3DL@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x18009023C
 * Callers:
 *     ?Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18009003C (-Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?empty@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_NXZ @ 0x18001F7CC (-empty@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_NXZ.c)
 *     ?end@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA?AV?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@2@XZ @ 0x18001F7DC (-end@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA-AV-$_String_iterator@V-$_.c)
 *     ??$getline@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@YAAEAV?$basic_istream@DU?$char_traits@D@std@@@0@AEAV10@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@@Z @ 0x180050F38 (--$getline@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@YAAEAV-$basic_istream@DU-$_ea_180050F38.c)
 *     ??0?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x180050FD4 (--0-$basic_istringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV-$basic_string@D.c)
 *     ??_D?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180051544 (--_D-$basic_istringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18008F1B0 (--$_Resize@U_Value_init_tag@std@@@-$vector@UColor@Math@Utils@Spectre@@V-$allocator@UColor@Math@U.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::ColorTransform::ImportFormat_Autodesk3DL(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  _BYTE *v9; // rax
  int v10; // eax
  _BYTE *v11; // rax
  _QWORD *v12; // rax
  _BYTE *v13; // r9
  _BYTE *v14; // rdx
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  float v19; // xmm2_4
  float v20; // xmm1_4
  __int64 v21; // r9
  int v22; // [rsp+20h] [rbp-E0h] BYREF
  int v23; // [rsp+24h] [rbp-DCh] BYREF
  int v24; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v26[30]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v27[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v28; // [rsp+140h] [rbp+40h]
  unsigned __int64 v29; // [rsp+148h] [rbp+48h]

  v5 = 0LL;
  v6 = 0LL;
  *(_DWORD *)(a3 + 32) = 2;
  v7 = 0LL;
  v27[0] = 0LL;
  v28 = 0LL;
  v29 = 15LL;
  while ( 1 )
  {
    v8 = std::getline<char,std::char_traits<char>,std::allocator<char>>(a2, (__int64)v27);
    if ( !(unsigned __int8)std::ios_base::operator bool(v8 + *(int *)(*(_QWORD *)v8 + 4LL)) )
      break;
    if ( !std::string::empty((__int64)v27) )
    {
      v9 = v27;
      if ( v29 >= 0x10 )
        v9 = (_BYTE *)v27[0];
      if ( v28 != 1 || (*v9 != 13 ? (v10 = *v9 < 0xDu ? -1 : 1) : (v10 = 0), v10) )
      {
        v11 = v27;
        if ( v29 >= 0x10 )
          v11 = (_BYTE *)v27[0];
        if ( *v11 != 35 )
        {
          if ( v5 )
          {
            std::istringstream::istringstream(v26, v27);
            v17 = std::istream::operator>>(v26, &v24);
            v18 = std::istream::operator>>(v17, &v23);
            std::istream::operator>>(v18, &v22);
            v19 = (float)v22;
            v20 = (float)v23;
            v21 = *(_QWORD *)(a3 + 8) + 16 * (v7 / v5 / v5 + v5 * (v7 / v5 % v5 + v5 * (v7 % v5)));
            *(float *)v21 = (float)v24;
            *(float *)(v21 + 4) = v20;
            *(float *)(v21 + 8) = v19;
            *(_DWORD *)(v21 + 12) = 1065353216;
            ++v7;
            std::istringstream::`vbase destructor'((__int64)v26);
            if ( v7 == v6 )
              break;
          }
          else
          {
            v12 = std::string::end(v27, &v25);
            v14 = v27;
            if ( v15 >= 0x10 )
              v14 = v13;
            while ( v14 != (_BYTE *)*v12 )
            {
              v16 = v5 + 1;
              if ( *v14 != 32 )
                v16 = v5;
              v5 = v16;
              ++v14;
            }
            ++v5;
            v6 = v5 * v5 * v5;
            std::vector<Spectre::Utils::Math::Color>::_Resize<std::_Value_init_tag>((_QWORD *)(a3 + 8), v6);
          }
        }
      }
    }
  }
  *(_QWORD *)a3 = v5;
  std::string::_Tidy_deallocate((__int64)v27);
}
