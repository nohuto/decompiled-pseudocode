/*
 * XREFs of ?CalculateNonIndexedTangents@Framework@Spectre@@YAXQEBUVector3@Math@Utils@2@IQEBUVector2@452@W4TriangularMeshTopology@GeometryUtils@12@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU3452@4@Z @ 0x1800E1C74
 * Callers:
 *     ?ComputeTangents@GeometryUtils@Framework@Spectre@@SAXV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@V?$shared_ptr@UVector2@Math@Utils@Spectre@@@5@0IV?$shared_ptr@X@5@I_NW4TriangularMeshTopology@123@3V?$function@$$A6AXAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@PEAX@Z@5@PEAXAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@5@@Z @ 0x1800E23E0 (-ComputeTangents@GeometryUtils@Framework@Spectre@@SAXV-$shared_ptr@UVector3@Math@Utils@Spectre@@.c)
 * Callees:
 *     ?ComputeTriangleTangents@Spectre@@YAXPEBUVector3@Math@Utils@1@PEBUVector2@341@III_NPEAU2341@3@Z @ 0x1800E2ED0 (-ComputeTriangleTangents@Spectre@@YAXPEBUVector3@Math@Utils@1@PEBUVector2@341@III_NPEAU2341@3@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Framework::CalculateNonIndexedTangents(
        Spectre *this,
        int a2,
        const struct Spectre::Utils::Math::Vector3 *a3,
        int a4,
        _QWORD *a5,
        bool a6,
        struct Spectre::Utils::Math::Vector3 *a7)
{
  const struct Spectre::Utils::Math::Vector3 *v7; // r10
  Spectre *v8; // r11
  unsigned __int8 v9; // bl
  int v10; // ebp
  unsigned int v11; // edi
  unsigned int v12; // r14d
  unsigned int v13; // esi
  char v14; // cl
  struct Spectre::Utils::Math::Vector3 *v15; // [rsp+40h] [rbp-38h]

  v7 = a3;
  v8 = this;
  if ( a4 == 1 )
  {
    v9 = 1;
    v10 = 1;
  }
  else
  {
    v9 = 0;
    v10 = 3;
  }
  v11 = 0;
  v12 = 0;
  v13 = a2 - 2 * v9;
  if ( v13 )
  {
    do
    {
      if ( *a5 && v12 == 100 * (v12 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a5 + 40LL))(*a5);
        v7 = a3;
        v8 = this;
      }
      v14 = v9 && (v11 & 1) != 0;
      Spectre::ComputeTriangleTangents(
        v8,
        v7,
        (const struct Spectre::Utils::Math::Vector2 *)v11,
        v11 + 1,
        v11 + 2,
        v14,
        a6,
        a7,
        v15);
      v7 = a3;
      v11 += v10;
      v8 = this;
      ++v12;
    }
    while ( v11 < v13 );
  }
}
