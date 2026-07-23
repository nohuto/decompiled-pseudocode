/*
 * XREFs of sub_1406ECE0C @ 0x1406ECE0C
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     sub_1409E8E6C @ 0x1409E8E6C (sub_1409E8E6C.c)
 * Callees:
 *     sub_1402E1C80 @ 0x1402E1C80 (sub_1402E1C80.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_1406EC9F8 @ 0x1406EC9F8 (sub_1406EC9F8.c)
 *     sub_1406EF020 @ 0x1406EF020 (sub_1406EF020.c)
 *     sub_1406EF140 @ 0x1406EF140 (sub_1406EF140.c)
 *     sub_1406EF170 @ 0x1406EF170 (sub_1406EF170.c)
 *     sub_1406EF280 @ 0x1406EF280 (sub_1406EF280.c)
 *     sub_1406EFA84 @ 0x1406EFA84 (sub_1406EFA84.c)
 *     sub_1406EFB1C @ 0x1406EFB1C (sub_1406EFB1C.c)
 *     sub_1406F0238 @ 0x1406F0238 (sub_1406F0238.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     SeCreateClientSecurity @ 0x1407271D0 (SeCreateClientSecurity.c)
 *     sub_14079435C @ 0x14079435C (sub_14079435C.c)
 *     sub_140797BD4 @ 0x140797BD4 (sub_140797BD4.c)
 *     sub_14079805C @ 0x14079805C (sub_14079805C.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     SeDeleteClientSecurity @ 0x1407A8070 (SeDeleteClientSecurity.c)
 *     sub_1408141A0 @ 0x1408141A0 (sub_1408141A0.c)
 *     sub_14081C500 @ 0x14081C500 (sub_14081C500.c)
 *     sub_140864164 @ 0x140864164 (sub_140864164.c)
 *     sub_1409E0AEC @ 0x1409E0AEC (sub_1409E0AEC.c)
 *     sub_1409E491C @ 0x1409E491C (sub_1409E491C.c)
 *     sub_1409E92F8 @ 0x1409E92F8 (sub_1409E92F8.c)
 *     sub_1409EB878 @ 0x1409EB878 (sub_1409EB878.c)
 */

__int64 __fastcall sub_1406ECE0C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ebx
  unsigned int *v9; // rdi
  int v10; // r15d
  unsigned int v11; // r14d
  __int64 v12; // rdx
  ACCESS_MASK v13; // eax
  unsigned int *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // r10d
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  UNICODE_STRING v23; // xmm0
  __int64 v24; // r9
  int v25; // ecx
  int v26; // ecx
  unsigned int *v27; // [rsp+20h] [rbp-30h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-18h] BYREF
  unsigned int *v30; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+58h] BYREF

  v30 = 0LL;
  *(_WORD *)(&ClientSecurityQos.EffectiveOnly + 1) = 0;
  UnicodeString = 0LL;
  result = sub_1406EF140(a2, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    result = sub_1406F0238();
    if ( (int)result >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v8 = sub_1406EF020(a1, a2, &v30);
      if ( v8 < 0 )
      {
LABEL_8:
        sub_1402F9540((__int64)KeGetCurrentThread());
        return (unsigned int)v8;
      }
      v9 = v30;
      v10 = *(_DWORD *)(a2 + 64);
      v11 = v30[3];
      v27 = v30 + 3;
      if ( (v11 & 0x40) != 0
        || (v10 & 3) == 3
        || (*(_DWORD *)(a2 + 64) & 0xC000) == 0xC000
        || (v10 & 2) != 0 && (v11 & 2) == 0
        || (v10 & 6) == 6 )
      {
        goto LABEL_6;
      }
      v13 = ((v11 | v10) & 0x100) == 0 ? 128 : 160;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
        v13 |= 0x40u;
      v8 = sub_14079435C(v13);
      if ( v8 < 0 )
        goto LABEL_7;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
      {
        if ( (v11 & 8) != 0 || (v10 & 8) != 0 || (v11 & 0x400) != 0 )
          goto LABEL_6;
        v8 = sub_1406EF170(a2 + 128, &UnicodeString);
        if ( v8 < 0 )
          goto LABEL_7;
        if ( *((_QWORD *)v9 + 90) )
        {
          SeDeleteClientSecurity(v9 + 176);
          *((_QWORD *)v9 + 90) = 0LL;
        }
        v9 = v30;
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        v8 = SeCreateClientSecurity(KeGetCurrentThread(), &ClientSecurityQos, 0, (PSECURITY_CLIENT_CONTEXT)(v30 + 176));
        if ( v8 < 0 )
          goto LABEL_7;
        v23 = UnicodeString;
        UnicodeString.Buffer = 0LL;
        *(UNICODE_STRING *)(v9 + 46) = v23;
        sub_1406EC9F8((__int64)v9, 4u);
        v8 = sub_1406EC9F8((__int64)v9, 2u);
        if ( v8 < 0 || !v9[80] )
          goto LABEL_7;
      }
      else if ( (v11 & 0x400) != 0 )
      {
        goto LABEL_20;
      }
      if ( (v10 & 0x100) != 0 )
      {
        v11 |= 0x100u;
        if ( !v9[52] )
          v9[52] = (v11 & 0x10) != 0 ? 1000 : 1;
LABEL_20:
        v14 = v9 + 69;
        v15 = *(_QWORD *)(v9 + 69);
        v16 = 0x4B886180222962ABLL - v15;
        if ( v15 == 0x4B886180222962ABLL )
          v16 = 0x4AA2F2756B3425A8LL - *(_QWORD *)(v9 + 71);
        if ( v16 )
        {
          v17 = 0x4CFFCC593AC66736LL - v15;
          if ( v15 == 0x4CFFCC593AC66736LL )
            v17 = 0x6B81390EF58D1581LL - *(_QWORD *)(v9 + 71);
          if ( v17 )
          {
LABEL_26:
            v8 = sub_1406EFB1C(a2, v9);
            if ( v8 < 0 )
              goto LABEL_7;
            if ( (*v27 & 0x2000000) != 0 )
            {
              v8 = sub_140864164(v9, 128LL);
              if ( v8 < 0 )
                goto LABEL_7;
              if ( a1 == qword_140D05008 )
              {
                v8 = sub_14081C500(v9, a2, 0LL);
                if ( v8 < 0 )
                  goto LABEL_7;
              }
              v8 = sub_1408141A0(v9, a2);
              if ( v8 < 0 )
                goto LABEL_7;
            }
            if ( !*(_DWORD *)(a2 + 56) )
              goto LABEL_33;
            if ( v9[1] )
            {
              v18 = sub_1406EFA84(v9);
              if ( v19 <= v18 )
                goto LABEL_31;
            }
            else
            {
              v18 = 0;
            }
            *(_DWORD *)(a2 + 56) = v18;
            v19 = v18;
LABEL_31:
            if ( v19 > v9[59] )
              v9[59] = v19;
LABEL_33:
            if ( (v11 & 0x400) == 0 )
            {
              v20 = *(_DWORD *)(a2 + 68);
              if ( v20 )
              {
                if ( v20 != v9[52] )
                {
                  v9[52] = v20;
                  sub_1406EC9F8((__int64)v9, 4u);
                }
              }
            }
            if ( (v10 & 0x80000) == 0 )
            {
              if ( (v11 & 0x80000) != 0 )
                v11 &= ~0x80000u;
              goto LABEL_40;
            }
            if ( v9[75] != 1 )
            {
              _InterlockedOr((volatile signed __int32 *)v9 + 206, 0x800u);
              v11 |= 0x80000u;
              if ( ((_BYTE)KdDebuggerNotPresent || byte_140C09804) && !byte_140C40504 )
              {
                v9 = v30;
              }
              else
              {
                v9 = v30;
                sub_1409E92F8(v30);
              }
LABEL_40:
              if ( (v10 & 0x80u) == 0
                || (v31 = 0LL, sub_140797BD4(v14, &v31), v8 = sub_1409EB878(v9, v31), sub_14079805C(&v31), v8 >= 0) )
              {
                *v27 = v11;
                v21 = *(_DWORD *)(a2 + 76);
                if ( v21 )
                {
                  if ( v9[52] || (v11 & 0x400) != 0 )
                    goto LABEL_86;
                  v25 = v9[59] - sub_1402E1C80((__int64)v9);
                  v21 = *(_DWORD *)(a2 + 76);
                  v26 = v25 - 1;
                  if ( v21 > v26 )
                  {
                    *(_DWORD *)(a2 + 76) = v26;
                    v21 = v26;
                  }
                  if ( v21 < 0 )
                  {
LABEL_86:
                    *(_DWORD *)(a2 + 76) = 0;
                    v21 = 0;
                  }
                }
                v9[53] = v21;
                v8 = sub_1406EF280(a2, v9);
                if ( EtwEventEnabled(qword_140C15FA8, &stru_14000EEB0) )
                  sub_1409E0AEC(v22, &stru_14000EEB0, v9);
              }
              goto LABEL_7;
            }
            v8 = -1073741637;
LABEL_7:
            RtlFreeUnicodeString(&UnicodeString);
            LOBYTE(v12) = 1;
            sub_1407981E8(v9, v12);
            goto LABEL_8;
          }
          v24 = 1LL;
        }
        else
        {
          v24 = 0LL;
        }
        sub_1409E491C(a2, a1, *v9, v24);
        goto LABEL_26;
      }
      if ( (v11 & 0x100) == 0 )
        goto LABEL_20;
      if ( *((_QWORD *)v9 + 100) )
      {
        v11 &= ~0x100u;
        sub_1406EC9F8((__int64)v9, 8u);
        goto LABEL_20;
      }
LABEL_6:
      v8 = -1073741811;
      goto LABEL_7;
    }
  }
  return result;
}
