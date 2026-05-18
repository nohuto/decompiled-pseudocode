/*
 * XREFs of ?CalculateNonIndexedeTangentsAndNormals@Framework@Spectre@@YAXQEBUVector3@Math@Utils@2@IQEBUVector2@452@W4TriangularMeshTopology@GeometryUtils@12@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU3452@44@Z @ 0x1800E1D90
 * Callers:
 *     ?ComputeTangentsAndNormals@GeometryUtils@Framework@Spectre@@SAXV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@V?$shared_ptr@UVector2@Math@Utils@Spectre@@@5@IV?$shared_ptr@X@5@I_NW4TriangularMeshTopology@123@3V?$function@$$A6AXAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@AEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@2@PEAX@Z@5@PEAXAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@5@@Z @ 0x1800E2910 (-ComputeTangentsAndNormals@GeometryUtils@Framework@Spectre@@SAXV-$shared_ptr@UVector3@Math@Utils.c)
 * Callees:
 *     ?CalculateTriangleNormal@Spectre@@YAXPEBUVector3@Math@Utils@1@III_NPEAU2341@@Z @ 0x1800E1ED8 (-CalculateTriangleNormal@Spectre@@YAXPEBUVector3@Math@Utils@1@III_NPEAU2341@@Z.c)
 *     ?ComputeTriangleTangents@Spectre@@YAXPEBUVector3@Math@Utils@1@PEBUVector2@341@III_NPEAU2341@3@Z @ 0x1800E2ED0 (-ComputeTriangleTangents@Spectre@@YAXPEBUVector3@Math@Utils@1@PEBUVector2@341@III_NPEAU2341@3@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Framework::CalculateNonIndexedeTangentsAndNormals(
        Spectre *this,
        int a2,
        const struct Spectre::Utils::Math::Vector3 *a3,
        int a4,
        _QWORD *a5,
        bool a6,
        struct Spectre::Utils::Math::Vector3 *a7,
        struct Spectre::Utils::Math::Vector3 *a8)
{
  const struct Spectre::Utils::Math::Vector3 *v8; // r11
  Spectre *v9; // r10
  unsigned __int8 v10; // si
  int v11; // r13d
  unsigned int v12; // ebp
  unsigned int v13; // r12d
  unsigned int v14; // r15d
  char v15; // r14
  struct Spectre::Utils::Math::Vector3 *v16; // [rsp+30h] [rbp-48h]
  struct Spectre::Utils::Math::Vector3 *v17; // [rsp+40h] [rbp-38h]

  v8 = a3;
  v9 = this;
  if ( a4 == 1 )
  {
    v10 = 1;
    v11 = 1;
  }
  else
  {
    v10 = 0;
    v11 = 3;
  }
  v12 = 0;
  v13 = 0;
  v14 = a2 - 2 * v10;
  if ( v14 )
  {
    do
    {
      if ( *a5 && v13 == 100 * (v13 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a5 + 40LL))(*a5);
        v9 = this;
        v8 = a3;
      }
      v15 = v10 && (v12 & 1) != 0;
      Spectre::ComputeTriangleTangents(
        v9,
        v8,
        (const struct Spectre::Utils::Math::Vector2 *)v12,
        v12 + 1,
        v12 + 2,
        v15,
        (bool)a7,
        a8,
        v17);
      Spectre::CalculateTriangleNormal(
        this,
        (const struct Spectre::Utils::Math::Vector3 *)v12,
        v12 + 1,
        v12 + 2,
        v15,
        a6,
        v16);
      v8 = a3;
      v12 += v11;
      ++v13;
    }
    while ( v12 < v14 );
  }
}
