/*
 * XREFs of ?CreateGutterExtensionResources@CDxDevice@DirectComposition@@AEAAJXZ @ 0x18003AC58
 * Callers:
 *     ?ExecuteGutterExtensions@CDxDevice@DirectComposition@@QEAAJAEBV?$DynArray@UGutterExtension@DirectComposition@@$0A@@@PEAUID3D11ShaderResourceView@@PEAUID3D11RenderTargetView@@IIW4DXGI_FORMAT@@@Z @ 0x1800233F0 (-ExecuteGutterExtensions@CDxDevice@DirectComposition@@QEAAJAEBV-$DynArray@UGutterExtension@Direc.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDxDevice::CreateGutterExtensionResources(DirectComposition::CDxDevice *this)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rax
  void *v9; // rax
  _BYTE v11[28]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v12; // [rsp+5Ch] [rbp-24h]
  int v13; // [rsp+6Ch] [rbp-14h]
  int v14; // [rsp+70h] [rbp-10h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 3) + 96LL))(
         *((_QWORD *)this + 3),
         &unk_1801E5A60,
         780LL,
         0LL,
         (char *)this + 136);
  if ( v2 >= 0 )
  {
    v3 = *((_QWORD *)this + 3);
    *(_QWORD *)v11 = "POSITION";
    *(_DWORD *)&v11[8] = 0;
    *(_QWORD *)&v11[12] = 2LL;
    *(_QWORD *)&v11[20] = 0LL;
    LODWORD(v12) = 0;
    v2 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64, void *, __int64, char *))(*(_QWORD *)v3 + 88LL))(
           v3,
           v11,
           1LL,
           &unk_1801E5A60,
           780LL,
           (char *)this + 152);
    if ( v2 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, char *))(**((_QWORD **)this + 3) + 120LL))(
             *((_QWORD *)this + 3),
             &unk_1801E5D80,
             712LL,
             0LL,
             (char *)this + 144);
      if ( v2 >= 0 )
      {
        v4 = *((_QWORD *)this + 3);
        *(_DWORD *)&v11[16] = 0;
        v13 = 0;
        v14 = LODWORD(FLOAT_3_4028235e38);
        *(_QWORD *)v11 = 0x300000000LL;
        *(_QWORD *)&v11[20] = 0x100000000LL;
        *(_QWORD *)&v11[8] = 0x300000003LL;
        v12 = _xmm;
        v2 = (*(__int64 (__fastcall **)(__int64, _BYTE *, char *))(*(_QWORD *)v4 + 184LL))(v4, v11, (char *)this + 160);
        if ( v2 >= 0 )
        {
          v5 = *((_QWORD *)this + 3);
          *(_QWORD *)&v12 = 0x800000001LL;
          v13 = 1;
          *(_QWORD *)&v11[20] = 0x100000001LL;
          *((_QWORD *)&v12 + 1) = 0x100000001LL;
          *(_DWORD *)&v11[16] = 0xFFFF;
          *(__m128i *)v11 = _mm_load_si128((const __m128i *)&_xmm);
          v14 = 8;
          v2 = (*(__int64 (__fastcall **)(__int64, _BYTE *, char *))(*(_QWORD *)v5 + 168LL))(
                 v5,
                 v11,
                 (char *)this + 168);
          if ( v2 >= 0 )
          {
            v6 = *((_QWORD *)this + 3);
            *(_QWORD *)((char *)&v12 + 4) = 0LL;
            *(_OWORD *)&v11[8] = 0LL;
            *(_QWORD *)v11 = 0x100000003LL;
            *(_DWORD *)&v11[24] = 1;
            LODWORD(v12) = 1;
            v2 = (*(__int64 (__fastcall **)(__int64, _BYTE *, char *))(*(_QWORD *)v6 + 176LL))(
                   v6,
                   v11,
                   (char *)this + 176);
            if ( v2 >= 0 )
            {
              v7 = *((_QWORD *)this + 3);
              *(_DWORD *)&v11[20] = 0;
              *(_DWORD *)&v11[16] = 0;
              *(_QWORD *)v11 = 0x200007CB0LL;
              *(_QWORD *)&v11[8] = 0x1000000000001LL;
              v2 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, char *))(*(_QWORD *)v7 + 24LL))(
                     v7,
                     v11,
                     0LL,
                     (char *)this + 128);
              if ( v2 >= 0 )
              {
                v8 = DefaultHeap::Alloc(0x7CB0uLL);
                *((_QWORD *)this + 23) = v8;
                if ( v8 && (v9 = DefaultHeap::Alloc(0x7CB0uLL), (*((_QWORD *)this + 24) = v9) != 0LL) )
                {
                  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 192LL))(
                    *((_QWORD *)this + 9),
                    4LL);
                  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 136LL))(
                    *((_QWORD *)this + 9),
                    *((_QWORD *)this + 19));
                  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 9) + 88LL))(
                    *((_QWORD *)this + 9),
                    *((_QWORD *)this + 17),
                    0LL,
                    0LL);
                  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 9) + 72LL))(
                    *((_QWORD *)this + 9),
                    *((_QWORD *)this + 18),
                    0LL,
                    0LL);
                  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**((_QWORD **)this + 9) + 80LL))(
                    *((_QWORD *)this + 9),
                    0LL,
                    1LL,
                    (char *)this + 160);
                  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 9) + 288LL))(
                    *((_QWORD *)this + 9),
                    *((_QWORD *)this + 21),
                    0LL);
                  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 344LL))(
                    *((_QWORD *)this + 9),
                    *((_QWORD *)this + 22));
                  *((_BYTE *)this + 240) = 1;
                }
                else
                {
                  return (unsigned int)-2147024882;
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
