/*
 * XREFs of ?EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z @ 0x1C0309D30
 * Callers:
 *     ?DxgkEnableFormattingBuffer@@YAXH@Z @ 0x1C0309BD4 (-DxgkEnableFormattingBuffer@@YAXH@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C02C3B7C (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 */

void __fastcall DXGGLOBAL::EnableFormattingBuffer(DXGGLOBAL *this, unsigned int a2)
{
  _QWORD **v3; // rsi
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v10[16]; // [rsp+20h] [rbp-38h] BYREF
  char v11[8]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v12; // [rsp+38h] [rbp-20h]
  char v13; // [rsp+40h] [rbp-18h]

  v3 = (_QWORD **)((char *)this + 800);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGGLOBAL *)((char *)this + 704), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v4 = *v3;
  while ( v4 != v3 && v4 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    if ( v5[350] )
    {
      _m_prefetchw(v5 + 3);
      v6 = v5[3];
      while ( v6 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64(v5 + 3, v6 + 1, v6);
        if ( v7 == v6 )
        {
          LOBYTE(v6) = 1;
          break;
        }
      }
      if ( (_BYTE)v6 )
      {
        v12 = v5;
        v13 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v5);
        if ( *((_DWORD *)v5 + 50) == 1 )
          ADAPTER_RENDER::EnableFormattingBuffer((ADAPTER_RENDER *)v5[350], a2, v8, v9);
        if ( v13 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
      }
    }
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
}
