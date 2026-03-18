/*
 * XREFs of NVMeInitHostMemoryBuffer @ 0x1C000F57C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DB58 (NVMeControllerInitPart2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00038A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0004A40 (memmove.c)
 *     NVMeZeroMemory @ 0x1C0009358 (NVMeZeroMemory.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C00240F0 (NVMeSetHostMemoryBuffer.c)
 */

__int64 __fastcall NVMeInitHostMemoryBuffer(__int64 a1)
{
  int v1; // edi
  _QWORD *v2; // rsi
  __int64 v4; // rax
  int v5; // r12d
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // r14d
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ecx
  size_t Size; // [rsp+28h] [rbp-180h]
  unsigned int v14; // [rsp+64h] [rbp-144h]
  _DWORD v15[2]; // [rsp+68h] [rbp-140h]
  _QWORD Src[16]; // [rsp+70h] [rbp-138h] BYREF
  _QWORD v17[16]; // [rsp+F0h] [rbp-B8h] BYREF

  v1 = 0;
  v2 = (_QWORD *)(a1 + 4000);
  if ( *(_QWORD *)(a1 + 4000) )
    goto LABEL_10;
  v4 = *(_QWORD *)(a1 + 1840);
  v5 = 0;
  v6 = (unsigned int)(*(_DWORD *)(v4 + 276) << 12);
  if ( *(_DWORD *)(v4 + 272) << 12 && (v7 = *(_DWORD *)(a1 + 124)) != 0 )
  {
    v14 = 1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) >> 7) & 0xF) + 12);
    v8 = StorPortExtendedFunction(69LL, a1, v6);
    if ( !v8 )
    {
      v1 = 8;
      NVMeZeroMemory(Src, 0x80u);
      v9 = 0LL;
      v10 = 8LL;
      do
      {
        v11 = v17[v9 / 2 + 1];
        v5 += v11;
        Src[v9 / 2] = v17[v9 / 2];
        v9 += 4LL;
        v15[v9] = v11 / v14;
        --v10;
      }
      while ( v10 );
      v8 = StorPortExtendedFunction(0LL, a1, 136LL);
      if ( v8 )
      {
LABEL_11:
        if ( v1 )
          StorPortExtendedFunction(70LL, a1, v17);
        goto LABEL_13;
      }
      *(_DWORD *)*v2 = v5;
      memmove((void *)(*v2 + 8LL), Src, 0x80uLL);
      *(_DWORD *)(*v2 + 4LL) = 128;
LABEL_10:
      LODWORD(Size) = *(_DWORD *)(*v2 + 4LL);
      v8 = NVMeSetHostMemoryBuffer(a1, (void *)(*v2 + 8LL), Size);
      if ( !v8 )
        return v8;
      goto LABEL_11;
    }
  }
  else
  {
    v8 = -1056964606;
  }
LABEL_13:
  if ( *v2 )
  {
    StorPortExtendedFunction(1LL, a1, *v2);
    *v2 = 0LL;
  }
  return v8;
}
