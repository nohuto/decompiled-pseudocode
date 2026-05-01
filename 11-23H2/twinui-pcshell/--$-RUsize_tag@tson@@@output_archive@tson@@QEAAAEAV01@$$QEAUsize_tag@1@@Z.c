/*
 * XREFs of ??$?RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z @ 0x180461870
 * Callers:
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEA_K@2@V32@V?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_K@1@1$$QEAV?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180231160 (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEA_K@2@V32@V-$nvp@AEAV-$vector@HV-$allocator@H@std@@@std@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tson::output_archive::operator()<tson::size_tag>(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r8
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 128);
  v3 = *a2;
  if ( v2 )
  {
    v4 = 4 * v2;
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
    v4 = 4LL;
  }
  *(_DWORD *)(v4 + a1 + 24) = 2;
  if ( v3 > 0xFFFF && *(int *)(a1 + 136) >= 0 )
    *(_DWORD *)(a1 + 136) = -2147483637;
  *(_WORD *)(a1 + 10) = v3;
  return a1;
}
