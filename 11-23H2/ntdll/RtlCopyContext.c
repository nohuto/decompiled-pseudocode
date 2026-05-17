/*
 * XREFs of RtlCopyContext @ 0x180054510
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetContextFlagsLocation @ 0x180054B2C (RtlpGetContextFlagsLocation.c)
 *     RtlpValidateContextFlags @ 0x180054E34 (RtlpValidateContextFlags.c)
 *     RtlpCopyXStateChunk @ 0x180054FA0 (RtlpCopyXStateChunk.c)
 *     RtlpCopyLegacyContext @ 0x1800550B0 (RtlpCopyLegacyContext.c)
 *     RtlpCopyKernelCetChunk @ 0x180102CE0 (RtlpCopyKernelCetChunk.c)
 */

__int64 __fastcall RtlCopyContext(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // edi
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rdx
  int *v10; // rax
  unsigned int *v11; // r8
  unsigned int v12; // r12d
  int v13; // ebp
  unsigned int v14; // ebp
  __int64 v15; // rcx
  unsigned int v16; // ebx
  int v17; // ecx
  char v18; // bp
  int v19; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *ContextFlagsLocation; // [rsp+38h] [rbp-30h]
  int v21; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0LL;
  result = RtlpValidateContextFlags(a2, 0LL);
  if ( (int)result >= 0 )
  {
    ContextFlagsLocation = (_DWORD *)RtlpGetContextFlagsLocation(a1, a2);
    v10 = (int *)RtlpGetContextFlagsLocation(a3, v9);
    v12 = *v11;
    v13 = *v10;
    result = RtlpValidateContextFlags(a2 | *v10 | *v11, 0LL);
    if ( (int)result >= 0 )
    {
      v14 = a2 & v13;
      result = RtlpValidateContextFlags(v14, &v19);
      if ( (int)result >= 0 )
      {
        result = RtlpValidateContextFlags(v12, &v21);
        v16 = result;
        if ( (int)result >= 0 )
        {
          if ( (~v21 & v19) != 0 )
          {
            return 2147483653LL;
          }
          else
          {
            RtlpCopyLegacyContext(v15, a1, v14, a3);
            *ContextFlagsLocation |= v12;
            if ( (v21 & 0xFFFFFFFE) != 0 )
            {
              if ( (v14 & 0x10000) != 0 )
              {
                v7 = a3 + 716;
                v6 = a1 + 716;
                LOBYTE(v17) = (v12 & 0x10020) != 65568;
                if ( ((unsigned __int8)v17 & ((v14 & 0x10020) == 65568)) != 0 )
                  *(_DWORD *)(a1 + 728) = 716;
              }
              else if ( (a2 & 0x100000) != 0 )
              {
                v7 = a3 + 1232;
                v6 = a1 + 1232;
              }
              else if ( (a2 & 0x200000) != 0 )
              {
                v7 = a3 + 416;
                v6 = a1 + 416;
              }
              else if ( (a2 & 0x400000) != 0 )
              {
                v7 = a3 + 912;
                v6 = a1 + 912;
              }
            }
            v18 = v19;
            if ( (v19 & 2) == 0 || (result = RtlpCopyXStateChunk(v17, v6, v6, v7, v7), v16 = result, (int)result >= 0) )
            {
              if ( (v18 & 4) == 0 )
                return v16;
              result = RtlpCopyKernelCetChunk(v17, v6, v6, v7, v7);
              v16 = result;
              if ( (int)result >= 0 )
                return v16;
            }
          }
        }
      }
    }
  }
  return result;
}
