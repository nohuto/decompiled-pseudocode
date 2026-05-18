/*
 * XREFs of ??0Matrix@Math@Utils@Spectre@@QEAA@XZ @ 0x1800177E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

Spectre::Utils::Math::Matrix *__fastcall Spectre::Utils::Math::Matrix::Matrix(Spectre::Utils::Math::Matrix *this)
{
  Spectre::Utils::Math::Matrix *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  result = this;
  *(_QWORD *)this = 1065353216LL;
  *(_QWORD *)((char *)this + 20) = 1065353216LL;
  *((_QWORD *)this + 5) = 1065353216LL;
  *((_DWORD *)this + 15) = 1065353216;
  return result;
}
