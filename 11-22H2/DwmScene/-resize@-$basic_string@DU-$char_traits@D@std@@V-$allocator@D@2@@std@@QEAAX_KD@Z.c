/*
 * XREFs of ?resize@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_KD@Z @ 0x18001F980
 * Callers:
 *     ?WStringToString@Utils@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEB_W_K@Z @ 0x18001F38C (-WStringToString@Utils@Spectre@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc_ea_18001F38C.c)
 *     ?ImportFormat_IridasCube@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090664 (-ImportFormat_IridasCube@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char_.c)
 *     ?ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090A38 (-ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char_.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@Z @ 0x18001ECA0 (--$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@-$basic_string@DU-$char_t.c)
 */

void **__fastcall std::string::resize(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rdi
  bool v5; // cf
  char *v6; // rbx
  void **result; // rax

  v2 = a1 + 2;
  v3 = a1[2];
  if ( a2 > v3 )
  {
    v4 = a2 - v3;
    if ( a2 - v3 > a1[3] - v3 )
    {
      return std::string::_Reallocate_grow_by<_lambda_e1befb086ad3257e3f042a63030725f7_,unsigned __int64,char>(
               (void **)a1,
               v4,
               (__int64)v2,
               a2 - v3);
    }
    else
    {
      v5 = a1[3] < 0x10uLL;
      *v2 = a2;
      if ( !v5 )
        a1 = (_QWORD *)*a1;
      v6 = (char *)a1 + v3;
      result = (void **)memset_0((char *)a1 + v3, 0, a2 - v3);
      v6[v4] = 0;
    }
  }
  else
  {
    if ( a1[3] >= 0x10uLL )
      a1 = (_QWORD *)*a1;
    *v2 = a2;
    *((_BYTE *)a1 + a2) = 0;
  }
  return result;
}
