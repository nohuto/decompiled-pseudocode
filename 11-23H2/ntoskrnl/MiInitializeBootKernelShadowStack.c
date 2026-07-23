/*
 * XREFs of MiInitializeBootKernelShadowStack @ 0x140644E50
 * Callers:
 *     MiInitializeBootKernelShadowStacks @ 0x1403B61CC (MiInitializeBootKernelShadowStacks.c)
 * Callees:
 *     MiInitializeBootShadowStackPage @ 0x140644EB4 (MiInitializeBootShadowStackPage.c)
 */

__int64 __fastcall MiInitializeBootKernelShadowStack(unsigned __int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi

  result = 0xFFFFF68000000000uLL;
  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (a1 & 0xFFF) != 0 )
  {
    v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    goto LABEL_6;
  }
  v3 = v2 + 16;
  while ( v2 <= v3 )
  {
LABEL_6:
    result = MiInitializeBootShadowStackPage(v2, 0LL);
    v2 += 8LL;
  }
  return result;
}
