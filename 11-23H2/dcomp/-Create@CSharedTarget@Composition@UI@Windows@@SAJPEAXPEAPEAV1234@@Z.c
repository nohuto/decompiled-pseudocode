/*
 * XREFs of ?Create@CSharedTarget@Composition@UI@Windows@@SAJPEAXPEAPEAV1234@@Z @ 0x18010DA84
 * Callers:
 *     DCompositionCreateTargetForHandle @ 0x180102E40 (DCompositionCreateTargetForHandle.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CSharedTarget::Create(
        HANDLE hSourceHandle,
        struct Windows::UI::Composition::CSharedTarget **a2)
{
  unsigned int v2; // edi
  HANDLE CurrentProcess; // rbx
  HANDLE v6; // rax
  _QWORD *v7; // rcx
  HANDLE v8; // rax
  HANDLE v9; // rcx
  HANDLE TargetHandle; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
  {
    TargetHandle = 0LL;
    *a2 = 0LL;
    CurrentProcess = GetCurrentProcess();
    v6 = GetCurrentProcess();
    if ( DuplicateHandle(v6, hSourceHandle, CurrentProcess, &TargetHandle, 0, 0, 2u) )
    {
      v7 = operator new(0x28uLL);
      if ( v7 )
      {
        v8 = TargetHandle;
        *v7 = &Windows::UI::Composition::CSharedTarget::`vftable';
        v7[2] = v8;
        *((_DWORD *)v7 + 2) = 1;
        v7[3] = 0LL;
        v7[4] = 0LL;
        *a2 = (struct Windows::UI::Composition::CSharedTarget *)v7;
      }
      else
      {
        v9 = TargetHandle;
        *a2 = 0LL;
        v2 = -2147024882;
        CloseHandle(v9);
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
