/*
 * XREFs of ??0?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@QEAA@_KAEBV?$allocator@UVector3@Math@Utils@Spectre@@@1@@Z @ 0x18008CD28
 * Callers:
 *     ?ComputeTangents@GeometryUtils@Framework@Spectre@@SAXV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@V?$shared_ptr@UVector2@Math@Utils@Spectre@@@5@0IV?$shared_ptr@X@5@I_NW4TriangularMeshTopology@123@3V?$function@$$A6AXAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@PEAX@Z@5@PEAXAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@5@@Z @ 0x1800E23E0 (-ComputeTangents@GeometryUtils@Framework@Spectre@@SAXV-$shared_ptr@UVector3@Math@Utils@Spectre@@.c)
 *     ?ComputeTangentsAndNormals@GeometryUtils@Framework@Spectre@@SAXV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@V?$shared_ptr@UVector2@Math@Utils@Spectre@@@5@IV?$shared_ptr@X@5@I_NW4TriangularMeshTopology@123@3V?$function@$$A6AXAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@AEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@2@PEAX@Z@5@PEAXAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@5@@Z @ 0x1800E2910 (-ComputeTangentsAndNormals@GeometryUtils@Framework@Spectre@@SAXV-$shared_ptr@UVector3@Math@Utils.c)
 * Callees:
 *     ??$_Construct_n@$$V@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18008C848 (--$_Construct_n@$$V@-$vector@UVector3@Math@Utils@Spectre@@V-$allocator@UVector3@Math@Utils@Spect.c)
 */

_QWORD *__fastcall std::vector<Spectre::Utils::Math::Vector3>::vector<Spectre::Utils::Math::Vector3>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  std::vector<Spectre::Utils::Math::Vector3>::_Construct_n<>((__int64)a1, a2);
  return a1;
}
