/*
 * XREFs of ?HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z @ 0x1801C9C54
 * Callers:
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801C9CDC (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 * Callees:
 *     ?GetHittestRegion@Edge@@AEAA_NPEBUD2D_VECTOR_2F@@PEAUD2D_RECT_F@@@Z @ 0x1801C9AC0 (-GetHittestRegion@Edge@@AEAA_NPEBUD2D_VECTOR_2F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?GetRunState@Edge@@QEBA?AW4EdgyExperienceRunState@Input@Internal@UI@Windows@@XZ @ 0x1801C9C14 (-GetRunState@Edge@@QEBA-AW4EdgyExperienceRunState@Input@Internal@UI@Windows@@XZ.c)
 */

char __fastcall Edge::HitTest(Edge *this, int a2, int a3, const struct D2D_VECTOR_2F *a4)
{
  Edge *v6; // rcx
  const struct D2D_VECTOR_2F *v7; // r9
  char v8; // bl
  D2D_RECT_F v10; // [rsp+20h] [rbp-18h] BYREF

  v10 = 0LL;
  v8 = 0;
  if ( (unsigned int)Edge::GetRunState((__int64)this)
    && Edge::GetHittestRegion(v6, v7, &v10)
    && (float)a2 >= v10.left
    && v10.right >= (float)a2
    && (float)a3 >= v10.top )
  {
    return v10.bottom >= (float)a3;
  }
  return v8;
}
