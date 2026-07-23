/*
 * XREFs of sub_140532460 @ 0x140532460
 * Callers:
 *     <none>
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405316B0 @ 0x1405316B0 (sub_1405316B0.c)
 */

__int64 __fastcall sub_140532460(
        _QWORD *a1,
        ULONG_PTR a2,
        _DWORD *a3,
        _QWORD *a4,
        _WORD *a5,
        __int64 a6,
        _QWORD *a7,
        __int64 *a8)
{
  __int64 v8; // r8
  _QWORD *v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r15
  __int64 v16; // rsi
  _OWORD *v17; // rsi
  int v18; // edx
  int v19; // r14d
  int v20; // ecx
  ULONG_PTR v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v26; // rax
  signed __int32 v27[8]; // [rsp+0h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-58h]
  __int64 v29; // [rsp+88h] [rbp+10h]

  v8 = a1[12];
  v11 = (_QWORD *)*a1;
  v29 = v8;
  v12 = a1[14] >> 4;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = v11[1028];
      v14 = v11[1030];
      v15 = v14 >> 4;
      v16 = (v14 >> 4) & 0x7FFF;
      if ( v16 == ((v11[1031] >> 4) & 0x7FFFLL) )
        break;
      v17 = (_OWORD *)(v8 + 16 * v16);
      v18 = (v15 & 0x7FFF) + 1;
      v19 = 0;
      *(_OWORD *)a2 = *v17;
      if ( !*(_QWORD *)a2 )
      {
        do
        {
          if ( *(_QWORD *)(a2 + 8) )
            break;
          KeStallExecutionProcessor(0xAu);
          if ( (unsigned int)++v19 > 0x186A0 )
            KeBugCheckEx(0x159u, 0x2000uLL, a2, *(_QWORD *)a2, *(_QWORD *)(a2 + 8));
          *(_OWORD *)a2 = *v17;
        }
        while ( !*(_QWORD *)a2 );
        v18 = (v15 & 0x7FFF) + 1;
        v8 = v29;
        if ( v19 )
          ++dword_140C49C6C;
      }
      *v17 = 0LL;
      v20 = 0;
      if ( v18 != (_DWORD)v12 )
        v20 = v15 + 1;
      v11[1030] = v14 ^ ((unsigned int)v14 ^ (16 * v20)) & 0x7FFF0;
      _InterlockedOr(v27, 0);
      v21 = *(_QWORD *)a2;
      if ( *(_QWORD *)a2 >> 60 == 1 && (v21 & 0x40000000000000LL) != 0 )
      {
        if ( (v21 & 0x24020000000000LL) != 0x20000000000LL )
        {
          *a3 = *(unsigned __int16 *)(a2 + 2);
          *a5 = HIDWORD(*(_QWORD *)a2) & 0x1FF;
          *(_OWORD *)a6 = 0LL;
          *(_QWORD *)(a6 + 16) = 0LL;
          *a7 = *(_QWORD *)(a2 + 8);
          *a4 = (unsigned __int16)*(_DWORD *)a2;
          v22 = (2 * ((*(_QWORD *)a2 >> 53) & 1LL)) | 1;
          if ( (*(_QWORD *)a2 & 0x4000000000000LL) == 0 )
            v22 = 2 * ((*(_QWORD *)a2 >> 53) & 1LL);
          v23 = v22 | 4;
          if ( (*(_QWORD *)a2 & 0x2000000000000LL) == 0 )
            v23 = v22;
          v24 = v23 | 0x10;
          if ( (*(_QWORD *)a2 & 0x20000000000LL) == 0 )
            v24 = v23;
          *a8 = v24;
          return 1LL;
        }
      }
      else
      {
        BugCheckParameter4 = 0LL;
        sub_1405316B0((__int64)a1, (unsigned __int16 *)a2, -1073741823);
        v8 = v29;
      }
    }
    if ( (v13 & 0x20) == 0 )
      break;
    if ( (v13 & 0x80u) == 0LL )
    {
      v26 = v11[3] & 0xFFFFFFFFFFFFDFFFuLL;
      v11[3] = v26;
      _InterlockedOr(v27, 0);
      v11[1028] = 32LL;
      _InterlockedOr(v27, 0);
      v11[3] = v26 | 0x6000;
      _InterlockedOr(v27, 0);
      *a3 = -1;
      *a5 = -1;
      *(_OWORD *)a6 = 0LL;
      *(_QWORD *)(a6 + 16) = 0LL;
      *a7 = 0LL;
      *a8 = 64LL;
      *a4 = 0LL;
      return 1LL;
    }
    while ( (v11[1028] & 0x80u) != 0LL )
      ;
  }
  return 0LL;
}
