/*
 * XREFs of ??0GeometryProcessingException@Framework@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800E1A7C
 * Callers:
 *     ??$CalculateIndexedNormals@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIW4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@@Z @ 0x1800E0F34 (--$CalculateIndexedNormals@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIW4TriangularMe.c)
 *     ??$CalculateIndexedNormals@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIW4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@@Z @ 0x1800E10D4 (--$CalculateIndexedNormals@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIW4TriangularMe.c)
 *     ??$CalculateIndexedTangents@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIQEBUVector2@341@W4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@5@Z @ 0x1800E1274 (--$CalculateIndexedTangents@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIQEBUVector2@3.c)
 *     ??$CalculateIndexedTangents@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIQEBUVector2@341@W4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@5@Z @ 0x1800E1450 (--$CalculateIndexedTangents@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIQEBUVector2@3.c)
 *     ??$CalculateIndexedTangentsAndNormals@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIQEBUVector2@341@W4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@55@Z @ 0x1800E1624 (--$CalculateIndexedTangentsAndNormals@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIQEB.c)
 *     ??$CalculateIndexedTangentsAndNormals@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIQEBUVector2@341@W4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@55@Z @ 0x1800E1840 (--$CalculateIndexedTangentsAndNormals@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIQEB.c)
 *     Spectre::Framework::ValidateTopologyIndexCount @ 0x1800E341C (Spectre--Framework--ValidateTopologyIndexCount.c)
 *     Spectre::Framework::ValidateTopologyVertexCount @ 0x1800E34D4 (Spectre--Framework--ValidateTopologyVertexCount.c)
 * Callees:
 *     ??0SpectreException@Utils@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x18001C33C (--0SpectreException@Utils@Spectre@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 */

_QWORD *__fastcall Spectre::Framework::GeometryProcessingException::GeometryProcessingException(
        _QWORD *a1,
        const char *a2)
{
  Spectre::Utils::SpectreException::SpectreException((__int64)a1, a2, 0);
  *a1 = &Spectre::Framework::GeometryProcessingException::`vftable';
  return a1;
}
