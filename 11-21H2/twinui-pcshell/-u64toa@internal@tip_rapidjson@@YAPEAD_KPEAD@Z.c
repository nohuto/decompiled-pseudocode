/*
 * XREFs of ?u64toa@internal@tip_rapidjson@@YAPEAD_KPEAD@Z @ 0x18015BFE4
 * Callers:
 *     ??$process@AEA_K@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEA_K@Z @ 0x180170904 (--$process@AEA_K@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEA_K@Z.c)
 *     ?Int64@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_N_J@Z @ 0x18044AE40 (-Int64@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_.c)
 * Callees:
 *     <none>
 */

char *__fastcall tip_rapidjson::internal::u64toa(unsigned __int64 this, _BYTE *a2, char *a3)
{
  _BYTE *v3; // rsi
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // rax
  _BYTE *v13; // rsi
  _BYTE *v14; // rsi
  _BYTE *v15; // rsi
  unsigned int v16; // r9d
  unsigned int v17; // r11d
  unsigned int v18; // r8d
  __int64 v19; // rdi
  __int64 v20; // r11
  __int64 v21; // r15
  __int64 v22; // r8
  unsigned int v23; // ebx
  __int64 v24; // r13
  __int64 v25; // rbx
  _BYTE *v26; // r9
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r15
  _BYTE *v29; // rsi
  __int64 v30; // rcx
  unsigned int v31; // edx
  __int64 v32; // r8
  _BYTE *v33; // rsi
  __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  unsigned int v36; // r15d
  unsigned int v37; // r11d
  __int64 v38; // rcx
  __int64 v39; // r11
  __int64 v40; // r8
  __int64 v41; // rdi
  unsigned int v42; // ebx
  __int64 v43; // r9
  __int64 v44; // rbx
  __int64 v45; // r10
  __int64 v46; // r15
  _BYTE *v47; // rsi

  v3 = a2;
  if ( this >= 0x5F5E100 )
  {
    if ( this >= 0x2386F26FC10000LL )
    {
      v26 = a2 + 1;
      v27 = this / 0x2386F26FC10000LL;
      v28 = this % 0x2386F26FC10000LL;
      if ( (unsigned int)(this / 0x2386F26FC10000LL) >= 0xA )
      {
        if ( (unsigned int)v27 >= 0x64 )
        {
          v31 = (unsigned int)v27 / 0x64;
          v32 = 2 * ((unsigned int)v27 % 0x64);
          if ( (unsigned int)v27 >= 0x3E8 )
          {
            v34 = 2 * v31;
            *v3 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v34];
            *v26 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v34 + 1)];
            v26[1] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v32];
            v33 = v26 + 2;
          }
          else
          {
            *v3 = v31 + 48;
            v33 = v26 + 1;
            *v26 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v32];
          }
          *v33 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v32 + 1)];
          v29 = v33 + 1;
        }
        else
        {
          v30 = (unsigned int)(2 * v27);
          *a2 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v30];
          v29 = a2 + 2;
          *v26 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v30 + 1)];
        }
      }
      else
      {
        *a2 = v27 + 48;
        v29 = a2 + 1;
      }
      v35 = v28 / 0x5F5E100;
      v36 = v28 % 0x5F5E100;
      v37 = (unsigned int)v35 / 0x2710;
      LODWORD(v35) = (unsigned int)v35 % 0x2710;
      v38 = 2 * (v37 / 0x64);
      v39 = 2 * (v37 % 0x64);
      v40 = 2 * ((unsigned int)v35 / 0x64);
      v41 = 2 * ((unsigned int)v35 % 0x64);
      v42 = v36 / 0x2710;
      v36 %= 0x2710u;
      v43 = 2 * (v42 / 0x64);
      v44 = 2 * (v42 % 0x64);
      v45 = 2 * (v36 / 0x64);
      *v29 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v38];
      v46 = 2 * (v36 % 0x64);
      v47 = v29 + 1;
      *v47++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v38 + 1)];
      *v47++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v39];
      *v47++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v39 + 1)];
      *v47++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v40];
      *v47++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v40 + 1)];
      *v47++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v41];
      *v47++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v41 + 1)];
      *v47++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v43];
      *v47++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v43 + 1)];
      *v47++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v44];
      *v47++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v44 + 1)];
      *v47++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v45];
      *v47 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v45 + 1)];
      v15 = v47 + 1;
      *v15 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v46];
      v6 = (unsigned int)(v46 + 1);
      goto LABEL_46;
    }
    v16 = this % 0x5F5E100;
    v17 = (unsigned int)(this / 0x5F5E100) / 0x2710;
    v18 = (unsigned int)(this / 0x5F5E100) % 0x2710;
    v19 = 2 * (v17 / 0x64);
    v20 = 2 * (v17 % 0x64);
    v21 = 2 * (v18 / 0x64);
    v22 = 2 * (v18 % 0x64);
    v23 = v16 / 0x2710;
    v16 %= 0x2710u;
    v24 = 2 * (v23 / 0x64);
    v25 = 2 * (v23 % 0x64);
    v10 = 2 * (v16 / 0x64);
    v11 = 2 * (v16 % 0x64);
    if ( this >= 0x38D7EA4C68000LL )
    {
      *a2 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v19];
      v3 = a2 + 1;
    }
    else if ( this < 0x5AF3107A4000LL )
    {
      if ( this < 0x9184E72A000LL )
      {
        if ( this < 0xE8D4A51000LL )
        {
          if ( this < 0x174876E800LL )
          {
            if ( this < 0x2540BE400LL )
            {
              if ( this < 0x3B9ACA00 )
                goto LABEL_26;
              goto LABEL_25;
            }
LABEL_24:
            *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v21 + 1)];
LABEL_25:
            *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v22];
LABEL_26:
            *v3 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v22 + 1)];
            v13 = v3 + 1;
            *v13++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v24];
            *v13++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v24 + 1)];
            *v13 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v25];
            v3 = v13 + 1;
            v12 = (unsigned int)(v25 + 1);
            goto LABEL_27;
          }
LABEL_23:
          *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v21];
          goto LABEL_24;
        }
LABEL_22:
        *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v20 + 1)];
        goto LABEL_23;
      }
LABEL_21:
      *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v20];
      goto LABEL_22;
    }
    *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v19 + 1)];
    goto LABEL_21;
  }
  if ( (unsigned int)this >= 0x2710 )
  {
    v8 = 2 * ((unsigned int)this / 0x2710 / 0x64);
    v9 = 2 * ((unsigned int)this / 0x2710 % 0x64);
    v10 = 2 * ((unsigned int)this % 0x2710 / 0x64);
    v11 = 2 * ((unsigned int)this % 0x2710 % 0x64);
    if ( this < 0x989680 )
    {
      if ( this < 0xF4240 )
      {
        if ( this < 0x186A0 )
          goto LABEL_15;
        goto LABEL_14;
      }
    }
    else
    {
      *a2 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v8];
      v3 = a2 + 1;
    }
    *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v8 + 1)];
LABEL_14:
    *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v9];
LABEL_15:
    v12 = (unsigned int)(v9 + 1);
LABEL_27:
    *v3 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v12];
    v14 = v3 + 1;
    *v14++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v10];
    *v14 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v10 + 1)];
    v15 = v14 + 1;
    *v15 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v11];
    v6 = (unsigned int)(v11 + 1);
LABEL_46:
    v3 = v15 + 1;
    goto LABEL_7;
  }
  v4 = 2 * ((unsigned int)this / 0x64);
  v5 = 2 * ((unsigned int)this % 0x64);
  if ( (unsigned int)this >= 0x3E8 )
  {
    *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v4];
    goto LABEL_9;
  }
  if ( (unsigned int)this >= 0x64 )
  {
LABEL_9:
    *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v4 + 1)];
    goto LABEL_10;
  }
  if ( (unsigned int)this >= 0xA )
LABEL_10:
    *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v5];
  v6 = (unsigned int)(v5 + 1);
LABEL_7:
  *v3 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v6];
  return v3 + 1;
}
