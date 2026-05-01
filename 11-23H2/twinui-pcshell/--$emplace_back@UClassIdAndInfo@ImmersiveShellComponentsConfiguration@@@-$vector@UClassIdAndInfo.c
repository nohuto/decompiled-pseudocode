/*
 * XREFs of ??$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAA?A_T$$QEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@Z @ 0x180489794
 * Callers:
 *     ??$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@Z @ 0x1804893EC (--$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88.c)
 *     ??R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z @ 0x18048A1A4 (--R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::emplace_back<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rdx
  char *result; // rax

  v3 = a1[1];
  if ( v3 == a1[2] )
    return std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Emplace_reallocate<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>(
             a1,
             v3,
             a2);
  *(_OWORD *)v3 = *(_OWORD *)a2;
  *(_QWORD *)(v3 + 16) = *(_QWORD *)(a2 + 16);
  result = (char *)a1[1];
  a1[1] = (__int64)(result + 24);
  return result;
}
