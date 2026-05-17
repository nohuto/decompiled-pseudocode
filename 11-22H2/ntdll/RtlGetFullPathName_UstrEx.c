/*
 * XREFs of RtlGetFullPathName_UstrEx @ 0x180019630
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x18001A5B0 (RtlDosSearchPath_Ustr.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B790 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x18001C2A0 (RtlGetFullPathName_Ustr.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlGetFullPathName_UstrEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8)
{
  __int64 v11; // r12
  _QWORD *v12; // r13
  __int64 *v13; // r15
  __int64 StringRoutine; // rsi
  unsigned __int16 v15; // bx
  __int64 v16; // r8
  unsigned int FullPathName_Ustr; // eax
  __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned int v20; // ebx
  unsigned __int16 v22; // bx
  __int64 v23; // r13
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  __int64 v31; // [rsp+88h] [rbp+20h]

  v30 = 0LL;
  v11 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v12 = a8;
  if ( a8 )
    *a8 = 0LL;
  v13 = a5;
  if ( a5 )
    *a5 = 0LL;
  StringRoutine = 0LL;
  LODWORD(a5) = *a7;
  if ( a2 )
  {
    if ( a3 && !a4 )
    {
      v20 = -1073741811;
      goto LABEL_22;
    }
    v15 = *(_WORD *)(a2 + 2);
    v16 = *(_QWORD *)(a2 + 8);
    v31 = v15;
LABEL_11:
    LODWORD(a8) = v15;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(a1, v15, v16, &v30, a6, &a5);
    LOWORD(v19) = FullPathName_Ustr;
    if ( FullPathName_Ustr )
    {
      if ( a2 && FullPathName_Ustr < (unsigned int)a8 )
      {
        *(_WORD *)a2 = FullPathName_Ustr;
        if ( v13 )
        {
          if ( v30 )
            v25 = (v30 - *(_QWORD *)(a2 + 8)) >> 1;
          else
            v25 = 0LL;
          *v13 = v25;
        }
        if ( a4 )
          *a4 = a2;
        v20 = 0;
      }
      else if ( a3 )
      {
        if ( v11 && FullPathName_Ustr < (unsigned int)a8 )
        {
          *(_WORD *)(a3 + 2) = v31;
          *(_WORD *)a3 = FullPathName_Ustr;
          *(_WORD *)(v11 + 2 * ((unsigned __int64)FullPathName_Ustr >> 1)) = 0;
          if ( v13 )
          {
            if ( v30 )
              v27 = (v30 - v11) >> 1;
            else
              v27 = 0LL;
            *v13 = v27;
          }
          if ( a4 )
            *a4 = a3;
          *(_QWORD *)(a3 + 8) = v11;
          v20 = 0;
          goto LABEL_22;
        }
        if ( (unsigned __int64)FullPathName_Ustr + 2 > 0xFFFE )
        {
LABEL_56:
          v20 = -1073741562;
        }
        else
        {
          while ( 1 )
          {
            v22 = v19 + 2;
            v23 = v22;
            StringRoutine = NtdllpAllocateStringRoutine(v22, v18);
            if ( !StringRoutine )
            {
              v20 = -1073741801;
              goto LABEL_18;
            }
            v24 = RtlGetFullPathName_Ustr(a1, (unsigned int)v22 - 2, StringRoutine, &v30, a6, &a5);
            v19 = v24;
            if ( !v24 )
              goto LABEL_47;
            if ( v24 <= (unsigned __int64)(v23 - 2) )
              break;
            NtdllpFreeStringRoutine(StringRoutine);
            if ( (unsigned __int64)(v19 + 2) > 0xFFFE )
              goto LABEL_56;
          }
          if ( v13 )
          {
            if ( v30 )
              v28 = (v30 - StringRoutine) >> 1;
            else
              v28 = 0LL;
            *v13 = v28;
          }
          *(_WORD *)(StringRoutine + 2 * ((unsigned __int64)(unsigned int)v19 >> 1)) = 0;
          *(_QWORD *)(a3 + 8) = StringRoutine;
          *(_WORD *)a3 = v19;
          *(_WORD *)(a3 + 2) = v23;
          if ( a4 )
            *a4 = a3;
          v20 = 0;
        }
        StringRoutine = 0LL;
      }
      else
      {
        if ( v12 )
          *v12 = FullPathName_Ustr;
        v20 = -1073741789;
      }
    }
    else
    {
LABEL_47:
      v20 = -1073741773;
    }
LABEL_18:
    if ( v11 )
      NtdllpFreeStringRoutine(v11);
    if ( StringRoutine )
      NtdllpFreeStringRoutine(StringRoutine);
LABEL_22:
    *a7 = (_DWORD)a5;
    return v20;
  }
  v15 = 520;
  v31 = 520LL;
  v26 = NtdllpAllocateStringRoutine(520LL, 0LL);
  v11 = v26;
  if ( v26 )
  {
    v16 = v26;
    goto LABEL_11;
  }
  return 3221225495LL;
}
