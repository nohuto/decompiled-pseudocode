/*
 * XREFs of ?CreatePlaneTriangleStrip@MeshHelper@Engine@Spectre@@SA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@PEAV223@MM_NI1@Z @ 0x18008CFFC
 * Callers:
 *     ?CreateGround@MeshHelper@Engine@Spectre@@SA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@PEAV223@_N@Z @ 0x18008CF08 (-CreateGround@MeshHelper@Engine@Spectre@@SA-AV-$shared_ptr@VMesh@Engine@Spectre@@@std@@PEAV223@_.c)
 * Callees:
 *     ?_Tidy@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@AEAAXXZ @ 0x1800105A8 (-_Tidy@-$vector@U-$pair@II@std@@V-$allocator@U-$pair@II@std@@@2@@std@@AEAAXXZ.c)
 *     ?ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x1800483C0 (-ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 *     ??$pow@HI$0A@@@YANHI@Z @ 0x1800551CC (--$pow@HI$0A@@@YANHI@Z.c)
 *     ?_Tidy@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@AEAAXXZ @ 0x180085D14 (-_Tidy@-$vector@UVector3@Math@Utils@Spectre@@V-$allocator@UVector3@Math@Utils@Spectre@@@std@@@st.c)
 *     Spectre::Engine::_anonymous_namespace_::CreateMesh @ 0x18008CF38 (Spectre--Engine--_anonymous_namespace_--CreateMesh.c)
 *     Spectre::Engine::_anonymous_namespace_::GeneratePlaneGeometry @ 0x18008D268 (Spectre--Engine--_anonymous_namespace_--GeneratePlaneGeometry.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x18008D574 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 *     ?push_back@?$vector@GV?$allocator@G@std@@@std@@QEAAX$$QEAG@Z @ 0x18008D5B4 (-push_back@-$vector@GV-$allocator@G@std@@@std@@QEAAX$$QEAG@Z.c)
 */

// Hidden C++ exception states: #wind=5
Spectre::Engine::Mesh **__fastcall Spectre::Engine::MeshHelper::CreatePlaneTriangleStrip(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int16 a5)
{
  Spectre::Engine::Mesh **v5; // r13
  unsigned int v6; // r12d
  unsigned int v7; // edi
  char v8; // bl
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  __int64 v12; // r8
  unsigned int v13; // esi
  unsigned int v14; // r14d
  __int16 v15; // bx
  __int16 v16; // r15
  unsigned int v17; // r12d
  __int64 v18; // r13
  unsigned int v19; // ebx
  __int16 v20; // r14
  __int128 v22; // [rsp+60h] [rbp-79h] BYREF
  __int64 v23; // [rsp+70h] [rbp-69h]
  __int128 v24; // [rsp+78h] [rbp-61h] BYREF
  __int64 v25; // [rsp+88h] [rbp-51h]
  __int128 v26; // [rsp+90h] [rbp-49h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-39h]
  __int128 v28; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-21h]

  v5 = (Spectre::Engine::Mesh **)a1;
  v6 = 0;
  v7 = (int)pow<int,unsigned int,0>(a1, 0);
  v28 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v8 = a5;
  LOBYTE(v9) = a5;
  Spectre::Engine::_anonymous_namespace_::GeneratePlaneGeometry(
    v11,
    v10,
    v9,
    v7,
    (__int64)&v28,
    (__int64)&v26,
    (__int64)&v24);
  v13 = v7 + 1;
  v22 = 0LL;
  v23 = 0LL;
  if ( v8 )
  {
    v19 = 1;
    if ( v7 )
    {
      v20 = v7 + 1;
      do
      {
        if ( v19 > 1 )
        {
          a5 = v20 - v13;
          std::vector<unsigned short>::push_back(&v22, &a5);
        }
        do
        {
          a5 = v20 - v13 + v6;
          std::vector<unsigned short>::push_back(&v22, &a5);
          a5 = v6 + v20;
          std::vector<unsigned short>::push_back(&v22, &a5);
          ++v6;
        }
        while ( v6 <= v7 );
        if ( v19 < v7 )
        {
          a5 = v7 + v20;
          std::vector<unsigned short>::push_back(&v22, &a5);
        }
        ++v19;
        v20 += v13;
        v6 = 0;
      }
      while ( v19 <= v7 );
    }
  }
  else
  {
    v14 = 1;
    if ( v7 )
    {
      v15 = v7 + 1;
      do
      {
        v16 = v15 - v13;
        if ( v14 > 1 )
        {
          a5 = v7 + v16;
          std::vector<unsigned short>::push_back(&v22, &a5);
        }
        if ( v7 != -1 )
        {
          v17 = v7;
          v18 = v13;
          do
          {
            a5 = v16 + v17;
            std::vector<unsigned short>::push_back(&v22, &a5);
            a5 = v17 + v15;
            std::vector<unsigned short>::push_back(&v22, &a5);
            --v17;
            --v18;
          }
          while ( v18 );
        }
        if ( v14 < v7 )
        {
          a5 = v15;
          std::vector<unsigned short>::push_back(&v22, &a5);
        }
        ++v14;
        v15 += v13;
      }
      while ( v14 <= v7 );
      v5 = (Spectre::Engine::Mesh **)a1;
    }
  }
  Spectre::Engine::_anonymous_namespace_::CreateMesh(
    v5,
    a2,
    v12,
    (__int64)&v28,
    &v22,
    (const struct Spectre::Utils::Math::Vector3 *const *)&v26,
    (const struct Spectre::Utils::Math::Vector2 *const *)&v24);
  Spectre::Engine::Mesh::ComputeRequiredData(*v5);
  std::vector<unsigned short>::_Tidy(&v22);
  std::vector<std::pair<unsigned int,unsigned int>>::_Tidy((__int64)&v24);
  std::vector<Spectre::Utils::Math::Vector3>::_Tidy((__int64)&v26);
  std::vector<Spectre::Utils::Math::Vector3>::_Tidy((__int64)&v28);
  return v5;
}
