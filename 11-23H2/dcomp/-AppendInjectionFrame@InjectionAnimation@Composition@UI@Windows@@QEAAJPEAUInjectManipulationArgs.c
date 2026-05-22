/*
 * XREFs of ?AppendInjectionFrame@InjectionAnimation@Composition@UI@Windows@@QEAAJPEAUInjectManipulationArgs@@I@Z @ 0x18016253C
 * Callers:
 *     ?AppendInjectionFrame@Test@InjectionAnimation@Composition@UI@Windows@@UEAAJPEAUInjectManipulationArgs@@I@Z @ 0x1801626C0 (-AppendInjectionFrame@Test@InjectionAnimation@Composition@UI@Windows@@UEAAJPEAUInjectManipulatio.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InjectionAnimation::AppendInjectionFrame(
        Windows::UI::Composition::InjectionAnimation *this,
        struct InjectManipulationArgs *a2,
        unsigned int a3)
{
  unsigned int v3; // edi
  _DWORD *v4; // rbx
  unsigned int v8; // r14d
  _OWORD *v9; // rax
  _OWORD *v10; // rdx
  _QWORD *v11; // rax
  _BYTE v13[132]; // [rsp+20h] [rbp-A8h]

  v3 = 0;
  v4 = (_DWORD *)((char *)this + 376);
  v8 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      *(_DWORD *)v13 = *v4;
      *(_OWORD *)&v13[4] = *(_OWORD *)a2;
      *(_OWORD *)&v13[20] = *((_OWORD *)a2 + 1);
      *(_OWORD *)&v13[36] = *((_OWORD *)a2 + 2);
      *(_OWORD *)&v13[52] = *((_OWORD *)a2 + 3);
      *(_OWORD *)&v13[68] = *((_OWORD *)a2 + 4);
      *(_OWORD *)&v13[84] = *((_OWORD *)a2 + 5);
      *(_OWORD *)&v13[100] = *((_OWORD *)a2 + 6);
      *(_OWORD *)&v13[116] = *((_OWORD *)a2 + 7);
      v9 = operator new(0x98uLL);
      v10 = v9;
      if ( !v9 )
        break;
      v9[1] = *(_OWORD *)v13;
      v9[2] = *(_OWORD *)&v13[16];
      v9[3] = *(_OWORD *)&v13[32];
      v9[4] = *(_OWORD *)&v13[48];
      v9[5] = *(_OWORD *)&v13[64];
      v9[6] = *(_OWORD *)&v13[80];
      v9[7] = *(_OWORD *)&v13[96];
      v9[8] = *(_OWORD *)&v13[112];
      *((_DWORD *)v9 + 36) = *(_DWORD *)&v13[128];
      *((_QWORD *)v9 + 1) = *((_QWORD *)this + 46);
      *(_QWORD *)v9 = 0LL;
      v11 = (_QWORD *)*((_QWORD *)this + 46);
      if ( v11 )
        *v11 = v10;
      else
        *((_QWORD *)this + 45) = v10;
      ++v8;
      *((_QWORD *)this + 46) = v10;
      a2 = (struct InjectManipulationArgs *)((char *)a2 + 128);
      if ( v8 >= a3 )
        goto LABEL_7;
    }
    v3 = -2147024882;
    DoStackCaptureDirect(-2147024882, 0x8Eu);
  }
  else
  {
LABEL_7:
    ++*v4;
  }
  return v3;
}
