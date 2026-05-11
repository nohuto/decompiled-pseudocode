/*
 * XREFs of USBParseFeatureUnit @ 0x1C0036920
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0019940 (memset.c)
 *     BusApiBuildFunctionUnit @ 0x1C0031CBC (BusApiBuildFunctionUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C00364FC (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C0036F38 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C0037D04 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseFeatureUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  int v5; // edi
  __int64 v6; // rbx
  int v7; // r15d
  unsigned int v8; // r12d
  int ChannelConfigForUnit; // r13d
  unsigned __int64 v10; // rax
  unsigned int v11; // esi
  int UnitString; // ebx
  unsigned int v13; // ebp
  __int64 Pool2; // rax
  _DWORD *v15; // rdi
  __int64 v16; // rdx
  int *v17; // r11
  int v18; // r10d
  __int16 v19; // r8
  int v20; // r9d
  __int16 v21; // ax
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // r8
  _DWORD *v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v30; // [rsp+A8h] [rbp+10h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  SourceString = 0LL;
  v6 = *(_QWORD *)(v2 + 72);
  v7 = USBParseCountOutputChannelsForUnit(*(_QWORD *)(v6 + 40), *(_QWORD *)(v6 + 48));
  v8 = v7 + 1;
  ChannelConfigForUnit = USBParseGetChannelConfigForUnit(*(_QWORD *)(v6 + 40), *(_QWORD *)(v6 + 48), a2[3]);
  v10 = ((unsigned __int64)*a2 - 7) / a2[5];
  v11 = v10;
  if ( (_DWORD)v10 != v7 + 1 )
  {
    if ( ChannelConfigForUnit )
    {
      if ( (unsigned int)v10 < v8 )
      {
        v5 = v7 - v10 + 1;
        goto LABEL_5;
      }
    }
    else if ( (_DWORD)v10 == v7 )
    {
      v5 = 1;
      goto LABEL_5;
    }
    return (unsigned int)-1073741438;
  }
LABEL_5:
  UnitString = USBParseGetUnitString(a1, a2, &SourceString);
  if ( UnitString >= 0 )
  {
    v13 = v5 + v11;
    Pool2 = ExAllocatePool2(256LL, 4LL * (v5 + v11), 1096972357LL);
    v15 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      v16 = 0LL;
      LODWORD(v30) = a2[4];
      if ( v11 )
      {
        v17 = (int *)Pool2;
        do
        {
          v18 = a2[5];
          v19 = 0;
          if ( a2[5] )
          {
            v20 = v18 + v16 * v18;
            do
            {
              v21 = a2[--v20 + 6];
              v19 = v21 | (v19 << 8);
              --v18;
            }
            while ( v18 );
          }
          v16 = (unsigned int)(v16 + 1);
          *v17++ = v19 & 3 | (4 * (v19 & 0xFFFC));
        }
        while ( (unsigned int)v16 < v11 );
      }
      if ( (unsigned int)v16 < v13 )
        memset(&v15[v16], 0, 4LL * (v13 - (unsigned int)v16));
      v22 = a2[3];
      v32 = 0LL;
      UnitString = BusApiBuildFunctionUnit(
                     a1,
                     v22,
                     2,
                     v7,
                     ChannelConfigForUnit,
                     1u,
                     (int *)&v30,
                     SourceString,
                     4 * v7 + 4,
                     &v32);
      if ( UnitString >= 0 )
      {
        v23 = v32;
        if ( v32 )
        {
          v24 = v32 + 108;
          *(_QWORD *)(v32 + 72) = v32 + 108;
          *(_BYTE *)(v23 + 64) = *v15 != 0;
          if ( v7 != -1 )
          {
            v25 = v15;
            v26 = v8;
            v27 = v24 - (_QWORD)v15;
            do
            {
              *(_DWORD *)(v23 + 68) |= *v25;
              *(_DWORD *)((char *)v25 + v27) = *v25;
              ++v25;
              --v26;
            }
            while ( v26 );
          }
        }
      }
      ExFreePool(v15);
    }
  }
  return (unsigned int)UnitString;
}
