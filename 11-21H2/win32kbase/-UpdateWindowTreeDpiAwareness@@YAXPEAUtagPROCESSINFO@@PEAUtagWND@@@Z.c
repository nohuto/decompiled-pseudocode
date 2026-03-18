/*
 * XREFs of ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0087E94
 * Callers:
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0087C20 (NtUserSetProcessDpiAwarenessContext.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x1C008F240 (HMValidateSharedHandleNoRip.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UpdateWindowTreeDpiAwareness(struct tagPROCESSINFO *a1, struct tagWND *a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  int v7; // edx
  _QWORD *v8; // r12
  char *v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rdx

  if ( qword_1C029C9B0 && (int)qword_1C029C9B0() >= 0 )
  {
    v4 = qword_1C029C9B8 ? qword_1C029C9B8(a2, 1LL, 0LL) : 0LL;
    if ( v4 )
    {
      v5 = (_QWORD *)(v4 + 32);
      v6 = *(_QWORD *)(v4 + 32);
      if ( v6 != 1 )
      {
        do
        {
          PsGetThreadWin32Thread(KeGetCurrentThread());
          v7 = (unsigned __int16)v6;
          if ( (unsigned __int64)(unsigned __int16)v6 < *((_QWORD *)gpsi + 1) )
          {
            v8 = gpKernelHandleTable;
            LOWORD(v6) = WORD1(v6) & 0x7FFF;
            v9 = (char *)qword_1C0294B68 + (unsigned int)(v7 * dword_1C0294B70);
            v10 = 3 * ((__int64)(unsigned int)(v7 * dword_1C0294B70) >> 5);
            if ( ((WORD1(v6) & 0x7FFF) == *((_WORD *)v9 + 13)
               || (_WORD)v6 == 0x7FFF
               || !(_WORD)v6 && PsGetCurrentProcessWow64Process())
              && (v9[25] & 1) == 0
              && v9[24] == 1 )
            {
              v11 = v8[v10];
              if ( v11 )
              {
                if ( qword_1C029C9C0 )
                {
                  if ( (int)qword_1C029C9C0() >= 0 && *(struct tagPROCESSINFO **)(*(_QWORD *)(v11 + 16) + 424LL) == a1 )
                  {
                    *(_DWORD *)(*(_QWORD *)(v11 + 40) + 288LL) = *((_DWORD *)a1 + 70);
                    v12 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 256LL));
                    if ( qword_1C029C9C8 )
                      qword_1C029C9C8(v11, v12);
                  }
                }
              }
            }
          }
          v6 = *++v5;
        }
        while ( *v5 != 1LL );
      }
      if ( qword_1C029C048 )
        qword_1C029C048(v4);
    }
  }
}
