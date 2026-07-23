/*
 * XREFs of SeRegisterImageVerificationCallback @ 0x140864610
 * Callers:
 *     <none>
 * Callees:
 *     ExRegisterCallback @ 0x14025A0B0 (ExRegisterCallback.c)
 */

__int64 __fastcall SeRegisterImageVerificationCallback(
        int a1,
        int a2,
        CALLBACK_FUNCTION *a3,
        void *a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned int v6; // ebx
  PVOID v7; // rax

  if ( a1 == 1 )
  {
    v6 = 0;
    if ( a2 )
    {
      return (unsigned int)-1073741584;
    }
    else if ( a5 )
    {
      return (unsigned int)-1073741581;
    }
    else
    {
      v7 = ExRegisterCallback(qword_140C158E0, a3, a4);
      if ( v7 )
      {
        _InterlockedIncrement(&dword_140CF6644);
        *a6 = v7;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v6;
}
