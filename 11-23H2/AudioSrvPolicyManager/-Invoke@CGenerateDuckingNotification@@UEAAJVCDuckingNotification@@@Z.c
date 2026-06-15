/*
 * XREFs of ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x1800218C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113A0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18001BEF4 (--1CDuckingNotification@@QEAA@XZ.c)
 *     WPP_SF_d @ 0x18001F1F8 (WPP_SF_d.c)
 *     WPP_SF_SSd @ 0x180023800 (WPP_SF_SSd.c)
 *     WPP_SF_i @ 0x1800239CC (WPP_SF_i.c)
 *     WPP_SF_id @ 0x180023A14 (WPP_SF_id.c)
 */

__int64 __fastcall CGenerateDuckingNotification::Invoke(__int64 a1, CDuckingNotification *a2, __int64 a3)
{
  char v4; // cl
  int MediaEvent; // esi
  __int64 v7; // rax
  const wchar_t *v8; // rcx
  PVOID *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v12; // rdx
  bool v13; // di
  __int64 v14; // rdx
  int v15; // eax
  PVOID *v16; // rcx

  v4 = *(_BYTE *)(a1 + 25);
  MediaEvent = 0;
  if ( *(_BYTE *)(a1 + 24) )
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( v4 )
    {
      if ( v7 )
      {
        v8 = (const wchar_t *)((char *)a2 + 16);
        if ( *((_QWORD *)a2 + 5) >= 8uLL )
          v8 = *(const wchar_t **)v8;
        if ( !_wcsicoll(v8, *(const wchar_t **)(a1 + 16)) )
        {
          if ( *((_QWORD *)a2 + 4) )
          {
            ++*(_DWORD *)(*((_QWORD *)a2 + 6) + 16LL);
            if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_id(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                14LL,
                a3,
                *(_QWORD *)a2,
                *(_DWORD *)(*((_QWORD *)a2 + 6) + 16LL));
            }
          }
          goto LABEL_42;
        }
      }
      v9 = (PVOID *)WPP_GLOBAL_Control;
    }
    else
    {
      v12 = (_QWORD *)((char *)a2 + 32);
      v13 = !v7 && !*v12;
      v9 = (PVOID *)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_id(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, a3, *(_QWORD *)a2, *v12 == 0LL);
        v9 = (PVOID *)WPP_GLOBAL_Control;
      }
      if ( v13 )
        goto LABEL_42;
    }
  }
  else if ( v4 )
  {
    v9 = (PVOID *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_id(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, a3, *(_QWORD *)a2, *(_DWORD *)(*((_QWORD *)a2 + 6) + 16LL));
      v9 = (PVOID *)WPP_GLOBAL_Control;
    }
    v14 = *((_QWORD *)a2 + 6);
    v15 = *(_DWORD *)(v14 + 16);
    if ( v15 )
    {
      *(_DWORD *)(v14 + 16) = v15 - 1;
LABEL_42:
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) = *(_QWORD *)a2;
      if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, a3, *(_QWORD *)a2);
      }
      MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), *((unsigned int *)a2 + 2));
      if ( MediaEvent )
      {
        v16 = (PVOID *)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x13u,
            &WPP_53f29f244fa932abd536e394721a76e7_Traceguids,
            *((_DWORD *)a2 + 2));
          v16 = (PVOID *)WPP_GLOBAL_Control;
        }
        if ( MediaEvent < 0 )
        {
          if ( v16 != &WPP_GLOBAL_Control && (*((_DWORD *)v16 + 7) & 0x8000000) != 0 && *((_BYTE *)v16 + 25) >= 2u )
            WPP_SF_d((TRACEHANDLE)v16[2], 0x16u, &WPP_53f29f244fa932abd536e394721a76e7_Traceguids, MediaEvent);
          AudPolicyLogError("CGenerateDuckingNotification::Invoke", 611, MediaEvent);
        }
      }
      else if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x14u,
          &WPP_53f29f244fa932abd536e394721a76e7_Traceguids,
          *((_DWORD *)a2 + 2));
      }
      goto LABEL_19;
    }
  }
  else
  {
    v9 = (PVOID *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, a3, *(_QWORD *)a2);
      v9 = (PVOID *)WPP_GLOBAL_Control;
    }
    if ( !*((_QWORD *)a2 + 4) )
      goto LABEL_42;
  }
  if ( v9 != &WPP_GLOBAL_Control && (*((_DWORD *)v9 + 7) & 0x8000000) != 0 && *((_BYTE *)v9 + 25) >= 4u )
  {
    v10 = (_QWORD *)((char *)a2 + 16);
    if ( *((_QWORD *)a2 + 5) >= 8uLL )
      v10 = (_QWORD *)*v10;
    WPP_SF_SSd(
      v9[2],
      21LL,
      &WPP_53f29f244fa932abd536e394721a76e7_Traceguids,
      *(_QWORD *)(a1 + 16),
      v10,
      *((_DWORD *)a2 + 2));
  }
LABEL_19:
  CDuckingNotification::~CDuckingNotification(a2);
  return (unsigned int)MediaEvent;
}
