/*
 * XREFs of ?DigitGen@internal@tip_rapidjson@@YAXAEBUDiyFp@12@0_KPEADPEAH3@Z @ 0x1806540C8
 * Callers:
 *     ?Grisu2@internal@tip_rapidjson@@YAXNPEADPEAH1@Z @ 0x1806544BC (-Grisu2@internal@tip_rapidjson@@YAXNPEADPEAH1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall tip_rapidjson::internal::DigitGen(
        tip_rapidjson::internal *this,
        const struct tip_rapidjson::internal::DiyFp *a2,
        unsigned __int64 a3,
        tip_rapidjson::internal *a4,
        char *a5,
        int *a6,
        int *a7)
{
  int v7; // r12d
  tip_rapidjson::internal *v9; // rbp
  unsigned __int64 v10; // r13
  __int64 v11; // r8
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rbx
  unsigned int v14; // r10d
  unsigned int v15; // r11d
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  unsigned int v21; // edi
  unsigned __int64 v22; // rax
  __int64 v23; // r15

  v7 = -*((_DWORD *)a2 + 2);
  v9 = a4;
  v10 = *(_QWORD *)a2 - *(_QWORD *)this;
  LODWORD(a4) = 1;
  v11 = *(_QWORD *)a2 >> -*((_BYTE *)a2 + 8);
  v12 = 1LL << -*((_BYTE *)a2 + 8);
  v13 = *(_QWORD *)a2 & (v12 - 1);
  if ( (unsigned int)v11 >= 0xA )
  {
    if ( (unsigned int)v11 >= 0x64 )
    {
      if ( (unsigned int)v11 >= 0x3E8 )
      {
        if ( (unsigned int)v11 >= 0x2710 )
        {
          if ( (unsigned int)v11 >= 0x186A0 )
          {
            if ( (unsigned int)v11 >= 0xF4240 )
            {
              if ( (unsigned int)v11 >= 0x989680 )
                LODWORD(a4) = 9 - ((unsigned int)v11 < 0x5F5E100);
              else
                LODWORD(a4) = 7;
            }
            else
            {
              LODWORD(a4) = 6;
            }
          }
          else
          {
            LODWORD(a4) = 5;
          }
        }
        else
        {
          LODWORD(a4) = 4;
        }
      }
      else
      {
        LODWORD(a4) = 3;
      }
    }
    else
    {
      LODWORD(a4) = 2;
    }
  }
  v14 = 0;
  v15 = 0;
  *(_DWORD *)a5 = 0;
  do
  {
    LOBYTE(v16) = 0;
    if ( (_DWORD)a4 == 1 )
    {
      v16 = v11;
      LODWORD(v11) = 0;
    }
    else
    {
      switch ( (_DWORD)a4 )
      {
        case 2:
          v16 = (unsigned int)v11 / 0xA;
          v17 = -10 * ((unsigned int)v11 / 0xA);
          break;
        case 3:
          v16 = (unsigned int)v11 / 0x64;
          v17 = -100 * ((unsigned int)v11 / 0x64);
          break;
        case 4:
          v16 = (unsigned int)v11 / 0x3E8;
          v17 = -1000 * ((unsigned int)v11 / 0x3E8);
          break;
        case 5:
          v16 = (unsigned int)v11 / 0x2710;
          v17 = -10000 * ((unsigned int)v11 / 0x2710);
          break;
        case 6:
          v16 = (unsigned int)v11 / 0x186A0;
          v17 = -100000 * ((unsigned int)v11 / 0x186A0);
          break;
        case 7:
          v16 = (unsigned int)v11 / 0xF4240;
          v17 = -1000000 * ((unsigned int)v11 / 0xF4240);
          break;
        case 8:
          v16 = (unsigned int)v11 / 0x989680;
          v17 = -10000000 * ((unsigned int)v11 / 0x989680);
          break;
        case 9:
          v16 = (unsigned int)v11 / 0x5F5E100;
          v17 = -100000000 * ((unsigned int)v11 / 0x5F5E100);
          break;
        default:
          goto LABEL_36;
      }
      LODWORD(v11) = v17 + v11;
    }
    if ( !v16 )
    {
LABEL_36:
      v18 = v15;
      if ( !v15 )
        goto LABEL_38;
    }
    v18 = v15 + 1;
    *(_DWORD *)a5 = v15 + 1;
    *((_BYTE *)v9 + (int)v15) = v16 + 48;
LABEL_38:
    a4 = (tip_rapidjson::internal *)(unsigned int)((_DWORD)a4 - 1);
    if ( v13 + ((unsigned __int64)(unsigned int)v11 << v7) <= a3 )
    {
      v23 = `tip_rapidjson::internal::DigitGen'::`2'::kPow10[(_QWORD)a4];
      v21 = v18;
      v13 += (unsigned __int64)(unsigned int)v11 << v7;
      *a6 += (int)a4;
      v22 = v10;
      v12 = v23 << v7;
      goto LABEL_48;
    }
    v15 = v18;
  }
  while ( (_DWORD)a4 );
  do
  {
    v19 = 10 * v13;
    a3 *= 10LL;
    if ( (unsigned __int8)(v19 >> v7) || v18 )
    {
      v20 = (int)v18++;
      *(_DWORD *)a5 = v18;
      *((_BYTE *)v9 + v20) = (v19 >> v7) + 48;
    }
    v13 = (v12 - 1) & v19;
    LODWORD(a4) = (_DWORD)a4 - 1;
    v21 = v18;
  }
  while ( v13 >= a3 );
  *a6 += (int)a4;
  if ( -(int)a4 < 9 )
    v14 = `tip_rapidjson::internal::DigitGen'::`2'::kPow10[-(int)a4];
  v22 = v10 * v14;
LABEL_48:
  tip_rapidjson::internal::GrisuRound(v9, (char *)v21, a3, v13, v12, v22, (unsigned __int64)a7);
}
