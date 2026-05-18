/*
 * XREFs of ?push_back@?$vector@UVector2@Math@Utils@Spectre@@V?$allocator@UVector2@Math@Utils@Spectre@@@std@@@std@@QEAAX$$QEAUVector2@Math@Utils@Spectre@@@Z @ 0x18008D5DC
 * Callers:
 *     ?UpdateBuffers@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXPEAVRenderDevice@23@IIW4Format@23@I@Z @ 0x18009D410 (-UpdateBuffers@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXPEAVRenderDevice@23@IIW4Format@23@.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<Spectre::Utils::Math::Vector2>::push_back(char **a1, _QWORD *a2)
{
  char *v3; // rdx
  char *result; // rax

  v3 = a1[1];
  if ( v3 == a1[2] )
    return std::vector<Spectre::Utils::Math::Vector2>::_Emplace_reallocate<Spectre::Utils::Math::Vector2>(a1, v3, a2);
  *(_QWORD *)v3 = *a2;
  a1[1] += 8;
  return result;
}
