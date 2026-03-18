/*
 * XREFs of DestroySMWP @ 0x1C0047920
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C0024310 (NtUserDeferWindowPosAndBand.c)
 *     xxxEndDeferWindowPosEx @ 0x1C004720C (xxxEndDeferWindowPosEx.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0048C48 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01CC950 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C0070ECC (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct _HANDLEENTRY *__fastcall DestroySMWP(__int64 a1)
{
  int v1; // eax
  char v2; // bl
  BOOL v4; // esi
  __int64 v5; // r14
  int v6; // ebp
  _QWORD *v7; // r14
  struct _HANDLEENTRY *result; // rax
  struct _HANDLEENTRY *v9; // rax
  struct _HANDLEENTRY *v10; // rsi
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 24);
  v2 = 0;
  v11 = 0;
  if ( (v1 & 2) != 0
    && (v9 = (struct _HANDLEENTRY *)_HMPheFromObjectWorker(a1),
        IdentifyPrimaryDestroyTarget::Identify((IdentifyPrimaryDestroyTarget *)&v11, v9),
        v2 = v11,
        (*(_DWORD *)(a1 + 24) & 2) != 0) )
  {
    result = (struct _HANDLEENTRY *)HMMarkObjectDestroy(a1);
    if ( !(_DWORD)result )
      goto LABEL_15;
    v4 = 1;
  }
  else
  {
    v4 = a1 != gSMWP;
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    v6 = *(_DWORD *)(a1 + 28) - 1;
    if ( v6 >= 0 )
    {
      v7 = (_QWORD *)(v5 + 120);
      do
      {
        if ( *v7 )
          GreDeleteObject(*v7);
        v7 += 21;
        --v6;
      }
      while ( v6 >= 0 );
    }
    if ( v4 )
      Win32FreePool(*(_QWORD *)(a1 + 40));
  }
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    result = (struct _HANDLEENTRY *)HMFreeObject(a1);
  }
  else if ( v4 )
  {
    result = (struct _HANDLEENTRY *)Win32FreePool(a1);
  }
  else
  {
    result = (struct _HANDLEENTRY *)gdwPUDFlags;
    gdwPUDFlags &= ~0x40000000u;
    if ( *(int *)(a1 + 32) > 8 )
    {
      result = (struct _HANDLEENTRY *)Win32AllocPoolZInit(672LL, 2004054869LL);
      v10 = result;
      if ( result )
      {
        result = (struct _HANDLEENTRY *)Win32FreePool(*(_QWORD *)(a1 + 40));
        *(_QWORD *)(a1 + 40) = v10;
        *(_DWORD *)(a1 + 32) = 4;
      }
    }
    *(_DWORD *)(a1 + 24) &= ~4u;
  }
LABEL_15:
  if ( v2 )
  {
    result = gphePrimaryDestroyTarget;
    gphePrimaryDestroyTarget = 0LL;
  }
  return result;
}
