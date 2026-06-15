/*
 * XREFs of ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180020F40
 * Callers:
 *     <none>
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113A0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18001BEF4 (--1CDuckingNotification@@QEAA@XZ.c)
 *     WPP_SF_d @ 0x18001F1F8 (WPP_SF_d.c)
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x18001FFD8 (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x1800210A0 (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180021710 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     WPP_SF_Sdi @ 0x1800238D0 (WPP_SF_Sdi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::AddDuckingNotification(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned __int64 a4)
{
  PVOID *v8; // rcx
  int v9; // ebx
  CDuckingNotification *v10; // rax
  int *v13; // rbx
  ATL::CAtlException *v14; // [rsp+38h] [rbp-C0h] BYREF
  _BYTE v15[56]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v16[16]; // [rsp+78h] [rbp-80h] BYREF
  __int64 v17; // [rsp+88h] [rbp-70h]
  __m128i si128; // [rsp+98h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-50h]

  v17 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v19 = 0LL;
  v8 = (PVOID *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdi(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)a2, a3, (_DWORD)a2, a3, a4);
    v8 = (PVOID *)WPP_GLOBAL_Control;
  }
  if ( *((_BYTE *)this + 448) == 1 )
  {
    v9 = -2147467260;
    goto LABEL_11;
  }
  v9 = CDuckingNotification::Init((CDuckingNotification *)v16, a3, a2, a4);
  if ( v9 < 0 )
    goto LABEL_10;
  try
  {
    v10 = CDuckingNotification::CDuckingNotification(
            (CDuckingNotification *)v15,
            (const struct CDuckingNotification *)v16);
    v9 = CLockedList<CDuckingNotification,1,0>::AddInterface((char *)this + 64, v10);
  }
  catch ( ATL::CAtlException *v14 )
  {
    v13 = (int *)v14;
    if ( *(_DWORD *)v14 == -1073741571 )
      _o__resetstkoflw();
    v9 = *v13;
  }
  if ( v9 < 0 )
  {
LABEL_10:
    v8 = (PVOID *)WPP_GLOBAL_Control;
LABEL_11:
    if ( v8 != &WPP_GLOBAL_Control && (*((_DWORD *)v8 + 7) & 0x8000000) != 0 && *((_BYTE *)v8 + 25) >= 2u )
      WPP_SF_d((TRACEHANDLE)v8[2], 0xBu, &WPP_53f29f244fa932abd536e394721a76e7_Traceguids, v9);
    AudPolicyLogError("CDuckingManager::AddDuckingNotification", 397, v9);
  }
  CDuckingNotification::~CDuckingNotification((CDuckingNotification *)v16);
  return (unsigned int)v9;
}
