/*
 * XREFs of Spectre::Engine::_anonymous_namespace_::GeneratePlaneGeometry @ 0x18008D268
 * Callers:
 *     ?CreatePlaneTriangleStrip@MeshHelper@Engine@Spectre@@SA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@PEAV223@MM_NI1@Z @ 0x18008CFFC (-CreatePlaneTriangleStrip@MeshHelper@Engine@Spectre@@SA-AV-$shared_ptr@VMesh@Engine@Spectre@@@st.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUVector2@Math@Utils@Spectre@@@?$vector@UVector2@Math@Utils@Spectre@@V?$allocator@UVector2@Math@Utils@Spectre@@@std@@@std@@QEAAPEAUVector2@Math@Utils@Spectre@@QEAU2345@AEBU2345@@Z @ 0x18008C8D8 (--$_Emplace_reallocate@AEBUVector2@Math@Utils@Spectre@@@-$vector@UVector2@Math@Utils@Spectre@@V-.c)
 *     ??$_Emplace_reallocate@AEBUVector3@Math@Utils@Spectre@@@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@QEAAPEAUVector3@Math@Utils@Spectre@@QEAU2345@AEBU2345@@Z @ 0x18008C9EC (--$_Emplace_reallocate@AEBUVector3@Math@Utils@Spectre@@@-$vector@UVector3@Math@Utils@Spectre@@V-.c)
 */

char *__fastcall Spectre::Engine::_anonymous_namespace_::GeneratePlaneGeometry(
        float a1,
        float a2,
        char a3,
        int a4,
        __int64 *a5,
        __int64 *a6,
        char **a7)
{
  float v7; // xmm8_4
  float v9; // xmm10_4
  float v10; // xmm6_4
  float v11; // xmm9_4
  int v12; // ebx
  int v13; // edi
  __int64 v14; // rdx
  float v15; // eax
  __int64 v16; // rdx
  char *result; // rax
  char *v18; // rdx
  __int64 v19; // [rsp+28h] [rbp-91h] BYREF
  __int64 v20; // [rsp+30h] [rbp-89h] BYREF
  float v21; // [rsp+38h] [rbp-81h]
  __int64 v22; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-71h]

  LODWORD(v7) = LODWORD(a1) ^ _xmm;
  v9 = (float)a4;
  v10 = (float)(a1 + a1) / (float)a4;
  if ( a3 )
    v11 = FLOAT_N1_0;
  else
    v11 = FLOAT_1_0;
  v12 = 0;
  do
  {
    v13 = 0;
    do
    {
      v14 = a5[1];
      *((float *)&v20 + 1) = a2;
      v21 = (float)(COERCE_FLOAT(LODWORD(v10) ^ _xmm) * (float)v12) - v7;
      *(float *)&v20 = (float)((float)v13 * v10) + v7;
      if ( v14 == a5[2] )
      {
        std::vector<Spectre::Utils::Math::Vector3>::_Emplace_reallocate<Spectre::Utils::Math::Vector3 const &>(
          a5,
          v14,
          (__int64)&v20);
      }
      else
      {
        v15 = v21;
        *(_QWORD *)v14 = v20;
        *(float *)(v14 + 8) = v15;
        a5[1] += 12LL;
      }
      LODWORD(v22) = 0;
      v23 = 0;
      v16 = a6[1];
      *((float *)&v22 + 1) = v11;
      if ( v16 == a6[2] )
      {
        result = std::vector<Spectre::Utils::Math::Vector3>::_Emplace_reallocate<Spectre::Utils::Math::Vector3 const &>(
                   a6,
                   v16,
                   (__int64)&v22);
      }
      else
      {
        result = (char *)v23;
        *(_QWORD *)v16 = v22;
        *(_DWORD *)(v16 + 8) = (_DWORD)result;
        a6[1] += 12LL;
      }
      v18 = a7[1];
      *((float *)&v19 + 1) = (float)v12 / v9;
      *(float *)&v19 = (float)v13 / v9;
      if ( v18 == a7[2] )
      {
        result = std::vector<Spectre::Utils::Math::Vector2>::_Emplace_reallocate<Spectre::Utils::Math::Vector2 const &>(
                   a7,
                   v18,
                   &v19);
      }
      else
      {
        *(_QWORD *)v18 = v19;
        a7[1] += 8;
      }
      ++v13;
    }
    while ( v13 <= (unsigned int)a4 );
    ++v12;
  }
  while ( v12 <= (unsigned int)a4 );
  return result;
}
