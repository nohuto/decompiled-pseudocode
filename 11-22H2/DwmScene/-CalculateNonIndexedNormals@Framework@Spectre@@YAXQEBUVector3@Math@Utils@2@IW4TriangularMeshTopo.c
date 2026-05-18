/*
 * XREFs of ?CalculateNonIndexedNormals@Framework@Spectre@@YAXQEBUVector3@Math@Utils@2@IW4TriangularMeshTopology@GeometryUtils@12@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU3452@@Z @ 0x1800E1B98
 * Callers:
 *     ?ComputeNormals@GeometryUtils@Framework@Spectre@@SAXV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@IV?$shared_ptr@X@5@I_NW4TriangularMeshTopology@123@V?$function@$$A6AXAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@PEAX@Z@5@PEAXAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@5@@Z @ 0x1800E2070 (-ComputeNormals@GeometryUtils@Framework@Spectre@@SAXV-$shared_ptr@UVector3@Math@Utils@Spectre@@@.c)
 * Callees:
 *     ?CalculateTriangleNormal@Spectre@@YAXPEBUVector3@Math@Utils@1@III_NPEAU2341@@Z @ 0x1800E1ED8 (-CalculateTriangleNormal@Spectre@@YAXPEBUVector3@Math@Utils@1@III_NPEAU2341@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Framework::CalculateNonIndexedNormals(Spectre *this, int a2, int a3, _QWORD *a4, bool a5)
{
  unsigned __int8 v7; // bl
  int v8; // ebp
  unsigned int v9; // edi
  unsigned int v10; // esi
  unsigned int v11; // r14d
  char v12; // al
  struct Spectre::Utils::Math::Vector3 *v13; // [rsp+30h] [rbp-28h]

  if ( a3 == 1 )
  {
    v7 = 1;
    v8 = 1;
  }
  else
  {
    v7 = 0;
    v8 = 3;
  }
  v9 = 0;
  v10 = 0;
  v11 = a2 - 2 * v7;
  if ( v11 )
  {
    do
    {
      if ( *a4 && v10 == 100 * (v10 / 0x64) )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 40LL))(*a4);
      v12 = v7 && (v9 & 1) != 0;
      Spectre::CalculateTriangleNormal(
        this,
        (const struct Spectre::Utils::Math::Vector3 *)v9,
        v9 + 1,
        v9 + 2,
        v12,
        a5,
        v13);
      v9 += v8;
      ++v10;
    }
    while ( v9 < v11 );
  }
}
