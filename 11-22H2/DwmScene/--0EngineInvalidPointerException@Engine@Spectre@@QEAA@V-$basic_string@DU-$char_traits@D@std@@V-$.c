/*
 * XREFs of ??0EngineInvalidPointerException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x180047AD4
 * Callers:
 *     ?ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z @ 0x180048E68 (-ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z.c)
 *     ?SetColours@Mesh@Engine@Spectre@@QEAAXQEBI@Z @ 0x1800490B0 (-SetColours@Mesh@Engine@Spectre@@QEAAXQEBI@Z.c)
 *     ?SetIndices@Mesh@Engine@Spectre@@QEAAXQEBG@Z @ 0x180049208 (-SetIndices@Mesh@Engine@Spectre@@QEAAXQEBG@Z.c)
 *     ?SetIndices@Mesh@Engine@Spectre@@QEAAXQEBI@Z @ 0x1800492E0 (-SetIndices@Mesh@Engine@Spectre@@QEAAXQEBI@Z.c)
 *     ?SetJointData@Mesh@Engine@Spectre@@QEAAXQEBI0@Z @ 0x18004949C (-SetJointData@Mesh@Engine@Spectre@@QEAAXQEBI0@Z.c)
 *     ?SetNormals@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@_N@Z @ 0x180049628 (-SetNormals@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@_N@Z.c)
 *     ?SetPositions@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@@Z @ 0x180049778 (-SetPositions@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@@Z.c)
 *     ?SetTangents@Mesh@Engine@Spectre@@QEAAXQEBUVector4@Math@Utils@3@_N@Z @ 0x1800498B8 (-SetTangents@Mesh@Engine@Spectre@@QEAAXQEBUVector4@Math@Utils@3@_N@Z.c)
 *     ?SetUV0@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z @ 0x180049A94 (-SetUV0@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z.c)
 *     ?SetUV1@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z @ 0x180049BD4 (-SetUV1@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HJAEBV34@_N@Z @ 0x18006ED68 (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$a_ea_18006ED68.c)
 */

_QWORD *__fastcall Spectre::Engine::EngineInvalidPointerException::EngineInvalidPointerException(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v7; // eax
  int v8; // r8d
  _QWORD v10[5]; // [rsp+38h] [rbp-40h] BYREF

  v10[4] = a2;
  v7 = (unsigned int)std::string::string(v10, a2);
  Spectre::Engine::EngineException::EngineException((_DWORD)a1, v7, v8, -2147467261, a4, 0);
  *a1 = &Spectre::Engine::EngineInvalidPointerException::`vftable';
  std::string::_Tidy_deallocate(a2);
  return a1;
}
