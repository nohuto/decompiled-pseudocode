/*
 * XREFs of ?_Buy_raw@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18008D494
 * Callers:
 *     ?_Buy_nonzero@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18008D46C (-_Buy_nonzero@-$vector@UVector3@Math@Utils@Spectre@@V-$allocator@UVector3@Math@Utils@Spectre@@@s.c)
 * Callees:
 *     ?allocate@?$allocator@UVector3@Math@Utils@Spectre@@@std@@QEAAPEAUVector3@Math@Utils@Spectre@@_K@Z @ 0x180085D68 (-allocate@-$allocator@UVector3@Math@Utils@Spectre@@@std@@QEAAPEAUVector3@Math@Utils@Spectre@@_K@.c)
 */

char *__fastcall std::vector<Spectre::Utils::Math::Vector3>::_Buy_raw(_QWORD *a1, unsigned __int64 a2)
{
  char *v4; // rax
  char *result; // rax

  v4 = (char *)std::allocator<Spectre::Utils::Math::Vector3>::allocate((__int64)a1, a2);
  *a1 = v4;
  a1[1] = v4;
  result = &v4[12 * a2];
  a1[2] = result;
  return result;
}
